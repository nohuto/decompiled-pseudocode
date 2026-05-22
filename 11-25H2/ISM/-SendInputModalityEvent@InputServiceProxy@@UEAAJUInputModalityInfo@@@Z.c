/*
 * XREFs of ?SendInputModalityEvent@InputServiceProxy@@UEAAJUInputModalityInfo@@@Z @ 0x18015DBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputServiceProxy::SendInputModalityEvent(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // xmm0_8
  __int64 v4; // rax
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(__int64 **)(a1 + 32);
  if ( v2 )
  {
    v3 = *a2;
    v4 = *v2;
    v8 = *((_DWORD *)a2 + 2);
    *(_QWORD *)v7 = v3;
    v5 = (*(__int64 (__fastcall **)(__int64 *, int *))(v4 + 184))(v2, v7);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x156,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
        (const char *)(unsigned int)v5,
        v7[0]);
  }
  return 0LL;
}
