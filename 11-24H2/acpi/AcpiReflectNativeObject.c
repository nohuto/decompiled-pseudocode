/*
 * XREFs of AcpiReflectNativeObject @ 0x140064EB0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIResumeInterpreter @ 0x14002D894 (AMLIResumeInterpreter.c)
 *     AcpiPauseInterpreterForNamespaceUpdates @ 0x140064E0C (AcpiPauseInterpreterForNamespaceUpdates.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D5F4 (AMLICreateNativeNamespaceObject.c)
 */

__int64 __fastcall AcpiReflectNativeObject(__int64 a1)
{
  __int64 v1; // r13
  char v2; // r15
  char v3; // r12
  int v4; // ebx
  unsigned int i; // esi
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // r9d
  bool v10; // cf
  char v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+78h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v13 = 0;
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v7 = 0;
    if ( *(_DWORD *)(a1 + 24) )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(a1 + 40LL * v7 + 48);
        if ( i )
        {
          if ( (v8 & 1) != 0 )
          {
LABEL_9:
            v9 = *(_DWORD *)(a1 + 40LL * v7 + 52);
            v10 = *(_DWORD *)(a1 + 40LL * v7 + 44) != 0;
            v12 = 0;
            v4 = AMLICreateNativeNamespaceObject(
                   v10 ? 6 : 8,
                   *(_DWORD *)(a1 + 40LL * v7 + 40),
                   v1,
                   v9,
                   *(_DWORD *)(a1 + 40LL * v7 + 56),
                   (__int64)&v12);
            if ( v4 < 0 && v12 )
              v4 = 0;
            *(_DWORD *)(a1 + 40LL * v7 + 64) = v4;
          }
        }
        else if ( *(_DWORD *)(a1 + 40LL * v7 + 44) <= 1u )
        {
          *(_DWORD *)(a1 + 40LL * v7 + 64) = -1073741823;
          if ( (v8 & 1) == 0 )
            goto LABEL_9;
          v3 = 1;
        }
        else
        {
          v4 = -1073741637;
          *(_DWORD *)(a1 + 40LL * v7 + 64) = -1073741637;
        }
        if ( ++v7 >= *(_DWORD *)(a1 + 24) )
        {
          v2 = v13;
          break;
        }
      }
    }
    if ( !v3 )
      break;
    if ( i == 1 )
      break;
    v4 = AcpiPauseInterpreterForNamespaceUpdates();
    if ( v4 < 0 )
      break;
    v2 = 1;
    v13 = 1;
  }
  if ( v2 )
    AMLIResumeInterpreter();
  return (unsigned int)v4;
}
