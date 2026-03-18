/*
 * XREFs of GreEqualRgn @ 0x140066030
 * Callers:
 *     <none>
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?RegionCore_bEqual@Win32kRS@@YAHPEBVREGION_CORE@@0@Z @ 0x140066150 (-RegionCore_bEqual@Win32kRS@@YAHPEBVREGION_CORE@@0@Z.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140066AF0 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

__int64 __fastcall GreEqualRgn(HRGN a1, HRGN a2)
{
  int v3; // r15d
  const struct REGION_CORE *v4; // r8
  unsigned int v5; // r14d
  Win32kRS *v6; // rbx
  __int64 v7; // rax
  REGION_CORE *v8; // rdi
  unsigned int pScan; // ebp
  struct REGION_CORE *v10; // rdx
  struct SCAN *v11; // rsi
  struct REGION_CORE *v12; // rdx
  struct SCAN *v13; // rdi
  unsigned int pscnTail; // eax
  _QWORD v16[7]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v17[7]; // [rsp+58h] [rbp-50h] BYREF

  v3 = 1;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a1, 1, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, a2, 1, 0);
  v5 = 0;
  if ( v17[0] && v16[0] )
  {
    v6 = (Win32kRS *)((v17[0] + 24LL) & -(__int64)(v17[0] != 0LL));
    v7 = v16[0] + 24LL;
    v8 = (REGION_CORE *)((v16[0] + 24LL) & -(__int64)(v16[0] != 0LL));
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      LOBYTE(v5) = (unsigned int)Win32kRS::RegionCore_bEqual(
                                   v6,
                                   (const struct REGION_CORE *)(v7 & -(__int64)(v16[0] != 0LL)),
                                   v4) != 0;
    }
    else
    {
      if ( *(_DWORD *)(((v17[0] + 24LL) & -(__int64)(v17[0] != 0LL)) + 0x18) != *(_DWORD *)((v7 & -(__int64)(v16[0] != 0LL))
                                                                                          + 0x18)
        || (pScan = (unsigned int)REGION_CORE::get_pScan(v6, (struct REGION_CORE *)-v17[0]),
            v11 = REGION_CORE::get_pScan(v8, v10),
            v13 = REGION_CORE::get_pScan(v6, v12),
            pscnTail = (unsigned int)REGION_CORE::get_pscnTail(v6),
            memcmp(v13, v11, pscnTail - pScan)) )
      {
        v3 = 0;
      }
      v5 = v3;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
  return v5;
}
