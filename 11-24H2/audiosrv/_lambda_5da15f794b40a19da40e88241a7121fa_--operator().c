/*
 * XREFs of _lambda_5da15f794b40a19da40e88241a7121fa_::operator() @ 0x1800B7098
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@$$QEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEA_J@Z @ 0x1800B5614 (--$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_5da15f794b40a19da40e88241a7121fa_::operator()(_QWORD **a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  struct IStreamGroupProxy **v9; // rsi
  int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct BRIDGE_STREAM_DESCRIPTOR *v14; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)**a1 + 88LL))(**a1, a1[1] + 8);
  v2 = *a1[2];
  if ( v2 )
  {
    v3 = a1[1];
    *((_DWORD *)v3 + 17) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 16LL) + 18;
    v3[9] = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL);
  }
  else
  {
    v4 = *a1[3];
    v5 = *(_QWORD *)(v4 + 16);
    if ( v5 )
    {
      v6 = a1[1];
      *((_DWORD *)v6 + 17) = *(unsigned __int16 *)(v5 + 16) + 18;
      v6[9] = *(_QWORD *)(v4 + 16);
    }
  }
  v7 = a1[4];
  v8 = a1[6];
  v9 = (struct IStreamGroupProxy **)a1[5];
  v14 = (struct BRIDGE_STREAM_DESCRIPTOR *)a1[1];
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v7);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeStreamInstanceProxy,IBridgeStreamInstanceProxy,BRIDGE_STREAM_DESCRIPTOR *,IStreamGroupProxy * &,__int64 &>(
          v7,
          &v14,
          v9,
          v8);
  if ( v10 < 0 )
  {
    v11 = 3360LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1[4] + 48LL))(*a1[4], **a1);
  if ( v10 < 0 )
  {
    v11 = 3362LL;
    goto LABEL_7;
  }
  return 0LL;
}
