/*
 * XREFs of ?GetSubmix@CBaseStreamGroupProxy@@UEAAJPEAPEAUISubmix@@@Z @ 0x1800F7320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::GetSubmix(CBaseStreamGroupProxy *this, struct ISubmix **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct ISubmix **); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, struct ISubmix **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  struct ISubmix *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISubmix *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct ISubmix **))*((_QWORD *)this + 10);
  v4 = **v3;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
  v5 = v4(v3, &GUID_c3876f08_e8f4_47e9_b42f_3bc3418c0675, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(struct ISubmix *))(*(_QWORD *)v10 + 8LL))(v10);
      v7 = v10;
    }
    *a2 = v7;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x340,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
  return v6;
}
