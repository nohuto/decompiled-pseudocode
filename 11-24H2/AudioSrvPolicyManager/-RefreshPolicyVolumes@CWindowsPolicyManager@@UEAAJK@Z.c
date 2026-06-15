/*
 * XREFs of ?RefreshPolicyVolumes@CWindowsPolicyManager@@UEAAJK@Z @ 0x180029D10
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::RefreshPolicyVolumes(CWindowsPolicyManager *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 (__fastcall **v5)(); // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall ***v7)(); // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = off_18004FC98;
  v6 = a2;
  v7 = &v5;
  v2 = QueueGenericWorkItem((__int64 *)&v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x390,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
