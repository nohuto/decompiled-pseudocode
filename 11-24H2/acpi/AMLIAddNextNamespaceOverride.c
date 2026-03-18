/*
 * XREFs of AMLIAddNextNamespaceOverride @ 0x14006C1E8
 * Callers:
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006C1E8 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006C1E8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006C350 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIGetValidNamespaceName @ 0x14006C9BC (AMLIGetValidNamespaceName.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     OSOpenNextSubkey @ 0x1400A3F64 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1400A41A8 (OSReadNextRegValue.c)
 *     OSCloseHandle @ 0x1400BE908 (OSCloseHandle.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverride(void *a1, __int64 a2)
{
  ULONG v4; // edi
  int RegValue; // ebx
  ULONG v6; // esi
  int Subkey; // edi
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-18h] BYREF

  v10 = 0LL;
  KeyHandle = 0LL;
  v4 = 0;
  do
  {
    RegValue = OSReadNextRegValue(a1, v4, v11);
    if ( RegValue >= 0 )
      RegValue = AMLIAddNextNamespaceOverrideObject(a1, a2, v11);
    ++v4;
  }
  while ( !RegValue );
  if ( RegValue < 0 )
  {
    if ( RegValue == -2147483622 )
    {
      v6 = 0;
      do
      {
        Subkey = OSOpenNextSubkey(a1, v6, v11, (__int64)&KeyHandle);
        if ( Subkey >= 0 )
        {
          RegValue = AMLIGetValidNamespaceName(v11, 0LL);
          if ( RegValue < 0 )
            goto LABEL_20;
          Subkey = CreateNameSpaceObject(gpheapGlobal, (__int64)v11, a2, *(_QWORD *)(a2 + 48), &v10, 0);
          if ( Subkey >= 0 )
          {
            Subkey = AMLIAddNextNamespaceOverride(KeyHandle, v10);
            DereferenceObjectEx(v10);
          }
          OSCloseHandle(KeyHandle);
          KeyHandle = 0LL;
        }
        ++v6;
      }
      while ( !Subkey );
      if ( Subkey == -2147483622 )
      {
        RegValue = 0;
      }
      else
      {
        if ( Subkey >= 0 )
          Subkey = -1073741823;
        RegValue = Subkey;
      }
    }
  }
  else
  {
    RegValue = -1073741823;
  }
LABEL_20:
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return (unsigned int)RegValue;
}
