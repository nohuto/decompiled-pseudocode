/*
 * XREFs of ?OnRIMAsyncPnpWorkNotificationSemaphoreStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x180070720
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009A86C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0F78 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMAsyncPnpWorkNotificationSemaphoreStatic(_QWORD *a1, __int64 a2, void *a3)
{
  int v3; // eax
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 )
  {
    v5 = 2147549183LL;
    v6 = 566LL;
LABEL_7:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v5,
      v7);
    return 0LL;
  }
  if ( !a1 )
  {
    v5 = 2147942487LL;
    v6 = 556LL;
    goto LABEL_7;
  }
  v3 = RIMOnAsyncPnpWorkNotification(a1[10], a2, a3);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x231,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v3,
      v7);
  return 0LL;
}
