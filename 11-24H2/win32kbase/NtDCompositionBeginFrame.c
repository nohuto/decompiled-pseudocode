/*
 * XREFs of NtDCompositionBeginFrame @ 0x140194290
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x14007424C (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1400BC420 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1400ED840 (EtwTraceDCompBeginFrameEvent.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(struct HDCOMPOSITIONCONNECTION__ *a1, void *Src, void *a3)
{
  signed int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  ULONG64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rcx
  struct DirectComposition::CConnection *v14; // [rsp+28h] [rbp-190h] BYREF
  unsigned __int64 Srca[4]; // [rsp+30h] [rbp-188h] BYREF
  _OWORD v16[10]; // [rsp+50h] [rbp-168h] BYREF
  _OWORD v17[10]; // [rsp+F0h] [rbp-C8h] BYREF

  Srca[1] = (unsigned __int64)a1;
  Srca[2] = (unsigned __int64)a3;
  v14 = 0LL;
  memset(v17, 0, sizeof(v17));
  Srca[0] = 0LL;
  if ( !UserIsCurrentProcessDwm() )
    return 3221225506LL;
  if ( Src )
  {
    memset(v16, 0, sizeof(v16));
    RtlCopyFromUser(v16, Src, 0xA0uLL);
    v17[0] = v16[0];
    v17[1] = v16[1];
    v17[2] = v16[2];
    v17[3] = v16[3];
    v17[4] = v16[4];
    v17[5] = v16[5];
    v17[6] = v16[6];
    v17[7] = v16[7];
    v17[8] = v16[8];
    v17[9] = v16[9];
    v7 = 0;
    if ( *(_QWORD *)&v16[9] )
    {
      v8 = 8LL * DWORD2(v16[9]);
      Srca[3] = v8;
      v9 = 0xFFFFFFFFLL;
      if ( v8 <= 0xFFFFFFFF )
        v9 = (unsigned int)v8;
      v7 = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v8 <= 0xFFFFFFFF && (_DWORD)v9 )
      {
        if ( (v16[9] & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = *(_QWORD *)&v16[9] + v9;
        if ( v10 > MmUserProbeAddress || v10 < *(_QWORD *)&v16[9] )
          v7 = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
      }
    }
    else if ( DWORD2(v16[9]) )
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    v7 = DirectComposition::CConnection::ReferenceHandle(a1, &v14);
    if ( v7 >= 0 )
    {
      EtwTraceDCompBeginFrameEvent((__int64)a1, *((__int64 *)&v17[0] + 1), v12);
      v7 = DirectComposition::CConnection::BeginFrame(v14, (const struct COMPOSITION_FRAME_INFO *)v17, Srca);
    }
  }
  if ( a3 )
    RtlCopyToUser(a3, Srca, 8uLL);
  else
    v7 = -1073741811;
  if ( v7 < 0 )
  {
    v11 = Srca[0];
    if ( Srca[0] )
    {
      v13 = *((_QWORD *)v14 + 24);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
    }
  }
  if ( v14 )
    DirectComposition::CConnection::Release(v14, v11);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
