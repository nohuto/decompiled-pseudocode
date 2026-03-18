/*
 * XREFs of ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14019EECC
 * Callers:
 *     NtGdiMakeFontDir @ 0x14021BEF0 (NtGdiMakeFontDir.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     EngMapFontFileFDInternal @ 0x1400B39CC (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400B7194 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401708D4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x14019F0B4 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14019F58C (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x14019F660 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1401B2440 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1401C499C (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1401CF04C (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?GreFillFontDir@@YAKQEAU_IFIMETRICS@@KPEAE@Z @ 0x14021D388 (-GreFillFontDir@@YAKQEAU_IFIMETRICS@@KPEAE@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GreMakeFontDir(unsigned int a1, unsigned __int8 *a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  struct _IFIMETRICS *v15; // rax
  struct _IFIMETRICS *v16; // rsi
  struct W32_PUSH_LOCK *v17; // rcx
  __int64 v19; // [rsp+48h] [rbp-79h] BYREF
  void *v20; // [rsp+50h] [rbp-71h] BYREF
  struct FONTFILEVIEW *v21; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-61h] BYREF
  struct W32_PUSH_LOCK *v23[2]; // [rsp+68h] [rbp-59h] BYREF
  ULONG_PTR iFile[8]; // [rsp+78h] [rbp-49h] BYREF
  int v25; // [rsp+B8h] [rbp-9h]
  unsigned __int16 *v26; // [rsp+C8h] [rbp+7h]
  unsigned int v27; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = 0;
  v22 = 0LL;
  v7 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v10 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v9, v8) + 96) + 24152LL);
  if ( !UmfdHostLifeTimeManager::EnsureUmfdHost(v12, v11, v13) )
    return 0LL;
  v19 = v10;
  memset_0(iFile, 0, 0x78uLL);
  v20 = 0LL;
  v27 = 0;
  v21 = (struct FONTFILEVIEW *)iFile;
  v26 = a3;
  if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)iFile, &v20, &v27, 0) )
    return 0LL;
  if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v21, 1LL) )
  {
    v14 = PDEVOBJ::LoadFontFile(
            (PDEVOBJ *)&v19,
            1u,
            (unsigned __int64 *)&v21,
            &v20,
            &v27,
            0LL,
            *(unsigned __int16 *)(v7 + 20360),
            0);
    if ( v14 )
    {
      if ( v14 != 0xFFFFFFFF )
      {
        v15 = PDEVOBJ::QueryFont((PDEVOBJ *)&v19, 0LL, v14, 1u, &v22);
        v16 = v15;
        if ( v15 )
        {
          v3 = GreFillFontDir(v15, a1, a2);
          if ( *(_QWORD *)(v10 + 3016) )
            PDEVOBJ::Free((PDEVOBJ *)&v19, v16, v22);
        }
        v3 &= -((*(unsigned int (__fastcall **)(unsigned __int64))(v10 + 3048))(v14) != 0);
      }
    }
  }
  if ( v25 )
  {
    AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)v23);
    v17 = *(struct W32_PUSH_LOCK **)(v7 + 24168);
    if ( v17 )
    {
      LODWORD(v19) = v25;
      NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(v17);
      v25 = 0;
    }
    Gre::PUSHLOCKEX::vUnlock(v23, 0);
  }
  EngUnmapFontFileFD((ULONG_PTR)iFile);
  vUnreferenceFileviewSection((struct FILEVIEW *)iFile);
  return v3;
}
