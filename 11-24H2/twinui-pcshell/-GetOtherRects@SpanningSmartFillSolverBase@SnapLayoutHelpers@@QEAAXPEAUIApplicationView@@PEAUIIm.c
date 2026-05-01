/*
 * XREFs of ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB614
 * Callers:
 *     ?GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB120 (-GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV-$vecto.c)
 *     ?GetOtherRows@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB85C (-GetOtherRows@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV-$vector@U.c)
 * Callees:
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18008B40C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A9F24 (-BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV-$vector@UCRect.c)
 *     ?push_back@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@Geometry@@@Z @ 0x1805ACBCC (-push_back@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@.c)
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1805ACBF4 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::GetOtherRects(
        __int64 a1,
        __int64 *a2,
        SnapRectHelpers *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 (__fastcall *v8)(SnapRectHelpers *, __int128 *); // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  struct IImmersiveMonitor *v14; // rdx
  int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // r8d
  int *v19; // rax
  int v20; // ecx
  int *v21; // rax
  int v22; // edx
  int v23; // [rsp+20h] [rbp-61h]
  int v24; // [rsp+30h] [rbp-51h]
  int v25; // [rsp+40h] [rbp-41h] BYREF
  int v26; // [rsp+44h] [rbp-3Dh]
  unsigned int v27; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-2Dh]
  unsigned int v30; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-25h]
  int v32; // [rsp+60h] [rbp-21h] BYREF
  int v33; // [rsp+68h] [rbp-19h] BYREF
  int v34; // [rsp+6Ch] [rbp-15h]
  int v35; // [rsp+70h] [rbp-11h]
  int v36; // [rsp+74h] [rbp-Dh]
  __int128 v37; // [rsp+78h] [rbp-9h] BYREF
  __int128 v38; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v39[16]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v8 = *(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)a3 + 88LL);
  v37 = 0LL;
  v9 = v8(a3, &v37);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E6,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v9,
      v23);
  v10 = *a2;
  v38 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v10 + 128))(a2, &v38);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E9,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v11,
      v23);
  v12 = *(_QWORD *)a3;
  v27 = 0;
  v32 = 0;
  v13 = (*(__int64 (__fastcall **)(SnapRectHelpers *, unsigned int *, int *))(v12 + 112))(a3, &v27, &v32);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7ED,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v13,
      v23);
  v15 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a3, v14);
  (**(void (__fastcall ***)(__int64, unsigned int *, __int128 *))a1)(a1, &v28, &v37);
  (*(void (__fastcall **)(__int64, int *, __int128 *))(*(_QWORD *)a1 + 8LL))(a1, &v25, &v37);
  (**(void (__fastcall ***)(__int64, unsigned int *, __int128 *))a1)(a1, &v30, &v38);
  v16 = v28;
  v17 = v30;
  if ( v15 + v28 - v30 <= 2 * v15 )
  {
    v17 = v29;
    v16 = v31;
    return SnapLayoutHelpers::SpanningSmartFillSolverBase::BuildOtherRegions(a1, v16, v17, v25, v26, v27, v24, a5);
  }
  if ( v15 + v29 - v31 <= 2 * v15 )
    return SnapLayoutHelpers::SpanningSmartFillSolverBase::BuildOtherRegions(a1, v16, v17, v25, v26, v27, v24, a5);
  std::vector<Geometry::CRect>::reserve(a5, ((__int64)(a5[1] - *a5) >> 4) + 2);
  v19 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                 a1,
                 v39,
                 v28,
                 v30,
                 v25,
                 v26);
  v33 = *v19;
  v34 = v19[1];
  v20 = v19[2];
  LODWORD(v19) = v19[3];
  v35 = v20;
  v36 = (int)v19;
  std::vector<Geometry::CRect>::push_back(a5, &v33);
  v21 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                 a1,
                 v39,
                 v31,
                 v29,
                 v25,
                 v26);
  v33 = *v21;
  v34 = v21[1];
  v22 = v21[2];
  LODWORD(v21) = v21[3];
  v35 = v22;
  v36 = (int)v21;
  return std::vector<Geometry::CRect>::push_back(a5, &v33);
}
