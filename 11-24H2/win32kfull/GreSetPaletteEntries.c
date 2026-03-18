/*
 * XREFs of GreSetPaletteEntries @ 0x14010EB50
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400DD150 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD250 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14016EFA0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z @ 0x140171324 (--0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140268A68 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(__int64 a1, __int64 a2, unsigned int a3, const struct tagPALETTEENTRY *a4)
{
  unsigned int v4; // r14d
  unsigned int v7; // edi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  HSEMAPHORE v15; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v16[5]; // [rsp+38h] [rbp-28h] BYREF

  v4 = a2;
  LOBYTE(a2) = 8;
  v7 = 0;
  v13 = HmgShareLockCheck(a1, a2);
  if ( v13 )
  {
    v9 = Gre::Base::Globals(v8);
    SEMOBJ<13>::SEMOBJ<13>(&v15, v9);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v13, v4, a3, a4);
    SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v14);
    v10 = *(_QWORD *)(v13 + 40);
    while ( v10 )
    {
      MDCOBJA::MDCOBJA(v16, v10);
      v11 = v16[0];
      if ( !v16[0] )
      {
        XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v16);
        break;
      }
      *(_DWORD *)(v16[0] + 316LL) |= 0xFu;
      v10 = *(_QWORD *)(v11 + 984);
      XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v16);
    }
    if ( v14 )
      GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v14);
    SEMOBJ<13>::vUnlock(&v15);
    if ( v13 )
      DEC_SHARE_REF_CNT(v13);
  }
  return v7;
}
