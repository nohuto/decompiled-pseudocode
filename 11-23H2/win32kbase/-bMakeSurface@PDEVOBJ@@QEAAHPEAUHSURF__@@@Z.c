/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0062100
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0155C5C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C003FFA0 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockEx @ 0x1C0041D30 (HmgShareLockEx.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C0064650 (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  HSURF v4; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  unsigned int v7; // ebp
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF
  struct OBJECT *v10; // [rsp+50h] [rbp-18h]

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2528LL) )
    return 1LL;
  if ( a2
    || (v6 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2688)) != 0LL && (v4 = (HSURF)v6(*(_QWORD *)(v2 + 1768))) != 0LL )
  {
    SURFREF::SURFREF((SURFREF *)v9, v4);
    if ( v10 )
    {
      *((_DWORD *)v10 + 28) |= 0x80000000;
      if ( (*(_DWORD *)(v2 + 40) & 0x8000) == 0 )
        HmgIncrementShareReferenceCount(v10);
      *(_QWORD *)(*(_QWORD *)this + 2528LL) = v10;
      if ( !*((_DWORD *)v10 + 24) )
        *((_DWORD *)v10 + 24) = *(_DWORD *)(*(_QWORD *)this + 2076LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2528LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1776LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 1792LL) & 0x8000000) != 0 )
        *((_DWORD *)v10 + 28) |= 0x80000u;
      HmgShareLockEx(**(_QWORD **)(*(_QWORD *)this + 1776LL), 8, 0);
      if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0
        && qword_1C0294B28
        && (int)qword_1C0294B28() >= 0
        && qword_1C0294B30 )
      {
        qword_1C0294B30(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      }
      PDEVOBJ::vFilterDriverHooks(this);
      if ( qword_1C02947B8 )
        v7 = qword_1C02947B8(v2);
      else
        v7 = 0;
      if ( qword_1C02947C8 )
        qword_1C02947C8(v2);
      if ( *(_QWORD *)(*(_QWORD *)this + 1744LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1744LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2528LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2528LL) != 0LL),
          4LL);
      v3 = v7;
    }
    SURFREF::~SURFREF((SURFREF *)v9);
  }
  return v3;
}
