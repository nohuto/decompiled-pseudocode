/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C02D1694
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C0093BC4 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C02C4810 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00C2510 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C011C7BC (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // r14d
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  Gre::Base *v11; // rcx
  _DWORD *v12; // rax
  int v13; // ecx
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 i; // r8
  __int64 v28; // rdi
  __int64 v30; // [rsp+30h] [rbp-89h] BYREF
  __int64 v31; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v32[8]; // [rsp+40h] [rbp-79h] BYREF
  __int64 *v33; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-65h]
  _BYTE v35[40]; // [rsp+58h] [rbp-61h] BYREF
  __int128 v36; // [rsp+80h] [rbp-39h] BYREF
  __int64 v37; // [rsp+90h] [rbp-29h]
  int v38; // [rsp+98h] [rbp-21h]
  _QWORD v39[2]; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v40[40]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v41; // [rsp+D8h] [rbp+1Fh]
  __int64 v42; // [rsp+E0h] [rbp+27h]
  int v43; // [rsp+128h] [rbp+6Fh] BYREF
  _DWORD *v44; // [rsp+130h] [rbp+77h] BYREF
  __int64 v45; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)&v33, a1);
  if ( v33 )
  {
    v6 = Gre::Base::Globals(v5);
    v45 = v33[6];
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v43);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v32, (struct PDEVOBJ *)&v45);
    v31 = *(_QWORD *)(v45 + 56);
    GreAcquireSemaphore(v31);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v39);
    v42 = 0LL;
    v41 = 0LL;
    v39[0] = 0LL;
    v10 = v45;
    v36 = 0LL;
    v38 = 1;
    v11 = (Gre::Base *)*(unsigned int *)(v45 + 40);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      Gre::Base::Globals(v11);
      *(_QWORD *)&v36 = *(_QWORD *)(v45 + 48);
      v37 = v45;
      GreAcquireSemaphore(v36);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v36, 11LL);
      v10 = v45;
    }
    v44 = *(_DWORD **)(v10 + 1776);
    if ( (*(_DWORD *)(v10 + 2140) & 0x100) == 0 )
      goto LABEL_37;
    v30 = *((_QWORD *)v6 + 5);
    GreAcquireSemaphore(v30);
    v12 = v44;
    v13 = v44[6];
    if ( (v13 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v13 & 0x10000 | 0x8000u) >> 15;
    if ( v2 == 1 )
    {
      if ( (v13 & 0x11000) != 0 )
      {
        v14 = *((_QWORD *)v6 + 750);
        v15 = v44[15] >> 1;
        v16 = 10LL;
        if ( v15 > 0xA || (v16 = v15) != 0 )
        {
          v17 = 0LL;
          v18 = (unsigned int)v16;
          do
          {
            v19 = *((_QWORD *)v12 + 14);
            v43 = *(_DWORD *)(v17 + *(_QWORD *)(v14 + 112));
            HIBYTE(v43) = 48;
            *(_DWORD *)(v17 + v19) = v43;
            v17 += 4LL;
            v12 = v44;
            --v18;
          }
          while ( v18 );
        }
        else
        {
          v16 = 0LL;
        }
        LODWORD(v20) = v12[7];
        LODWORD(v21) = 20;
        if ( (_DWORD)v16 )
        {
          while ( 1 )
          {
            v21 = (unsigned int)(v21 - 1);
            v20 = (unsigned int)(v20 - 1);
            v22 = *((_QWORD *)v12 + 14);
            v43 = *(_DWORD *)(*(_QWORD *)(v14 + 112) + 4 * v21);
            HIBYTE(v43) = 48;
            *(_DWORD *)(v22 + 4 * v20) = v43;
            if ( !--v16 )
              break;
            v12 = v44;
          }
        }
        *(_DWORD *)(v33[122] + 152) |= 0xFu;
        v44[6] &= 0xFFFEEFFF;
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v44);
        v4 = 1;
      }
      goto LABEL_32;
    }
    if ( v2 == 2 )
    {
      v23 = v44[7];
      if ( !v23 )
      {
        v3 = 0;
LABEL_32:
        SEMOBJ::vUnlock((SEMOBJ *)&v30);
        if ( v4 && (*(_DWORD *)(v45 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v45 + 1736) )
            (*(void (__fastcall **)(_QWORD, _DWORD **, _QWORD, _QWORD, _DWORD))(v45 + 1736))(
              *(_QWORD *)(*(_QWORD *)(v45 + 24) + 1768LL),
              &v44,
              0LL,
              0LL,
              v44[7]);
          else
            v3 = 0;
        }
LABEL_37:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v36, v7, v8, v9);
        if ( v39[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v39);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v40);
        SEMOBJ::vUnlock((SEMOBJ *)&v31);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v32);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v43);
        if ( v33 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v33);
          v43 = 0;
          v28 = *v33;
          HmgDecrementExclusiveReferenceCountEx(v33, v34, &v43);
          if ( v43 )
            GrepDeleteDC(v28, 0x2000000LL);
        }
        goto LABEL_42;
      }
      v24 = 1;
      if ( (unsigned int)(v23 - 1) > 1 )
      {
        do
        {
          v25 = v24++;
          *(_BYTE *)(*((_QWORD *)v12 + 14) + 4 * v25 + 3) = 0;
          v12 = v44;
        }
        while ( v24 < v44[7] - 1 );
      }
      v26 = v12[6] & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v44[7]; v12 = v44 )
      {
        *(_BYTE *)(*((_QWORD *)v12 + 14) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v26 = v12[6] & 0xFFFEEFFF | 0x10000;
    }
    v12[6] = v26;
    goto LABEL_32;
  }
LABEL_42:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v35);
  return v3;
}
