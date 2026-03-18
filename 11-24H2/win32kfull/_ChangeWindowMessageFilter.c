/*
 * XREFs of _ChangeWindowMessageFilter @ 0x1401DB60C
 * Callers:
 *     NtUserChangeWindowMessageFilter @ 0x1401DB5C0 (NtUserChangeWindowMessageFilter.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1401970BC (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1401B1944 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1401CD090 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ChangeWindowMessageFilter(__int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  void ***v7; // rbx
  UIPrivilegeIsolation *v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0;
  v4 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = (void ***)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = (void ***)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v6)
    && !UIPrivilegeIsolation::Enforced(v8) )
  {
    return 1LL;
  }
  result = ValidateChangeMessageFilter((struct tagPROCESSINFO *)v7, v4);
  if ( (_DWORD)result )
  {
    if ( a2 == 1 )
    {
      return (unsigned int)AddMessageToFilter(v7 + 106, v4, 0LL);
    }
    else if ( a2 == 2 )
    {
      v2 = RemoveMessageFromFilter(v7 + 106, v4, &v10);
      if ( v2 )
      {
        if ( v10 )
        {
          UserSetLastError(87);
          return 0;
        }
      }
    }
    else
    {
      UserSetLastError(87);
    }
    return v2;
  }
  return result;
}
