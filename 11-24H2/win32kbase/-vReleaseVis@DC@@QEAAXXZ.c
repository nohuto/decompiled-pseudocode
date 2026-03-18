/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1400364AC
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401C2DFC (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h]
  char v5; // [rsp+28h] [rbp-10h]
  ULONG_PTR v6; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 9) |= 0x10u;
  v2 = HmgPentryFromPobj(this);
  *(_BYTE *)(v2 + 15) |= 4u;
  DC::AcquireDcVisRgnExclusive(this);
  v6 = *((_QWORD *)this + 142);
  RGNOBJ::vDeleteRGNOBJ(&v6);
  *((_QWORD *)this + 142) = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3) + 88) + 4160LL);
  if ( v5 )
    CPushLock::ReleaseLock((CPushLock *)(v4 + 1112));
}
