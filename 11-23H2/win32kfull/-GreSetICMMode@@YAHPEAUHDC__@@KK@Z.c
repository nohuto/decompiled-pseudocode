/*
 * XREFs of ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0007548
 * Callers:
 *     NtGdiSetIcmMode @ 0x1C0007530 (NtGdiSetIcmMode.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00C2510 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00C32AC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetICMMode(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v7; // r10d
  __int64 v8; // rax
  unsigned int v9; // r9d
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rsi
  _QWORD v15[2]; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v16[32]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v18; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v19[64]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v20; // [rsp+108h] [rbp+7Fh] BYREF

  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( !v15[0] )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v15);
    return 0LL;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v15, 0) )
    goto LABEL_42;
  v7 = *(_DWORD *)(v15[0] + 120LL);
  v8 = *(_QWORD *)(v15[0] + 48LL);
  v9 = v7 & 0xF0000000;
  v10 = (unsigned __int8)v7;
  v11 = v7 & 0xF00;
  if ( a2 == 1 )
  {
    if ( !a3 )
    {
      v11 = 0;
      v10 = v7 & 0xF0;
      goto LABEL_34;
    }
    if ( ((a3 - 256) & 0xFFFFFCFF) != 0 || a3 == 768 )
      goto LABEL_32;
    v11 = a3;
    v13 = (a3 >> 8) & 0xF;
    if ( (a3 & 0x200) != 0 )
    {
      if ( !v8 )
      {
LABEL_32:
        v5 = 0;
        goto LABEL_42;
      }
      if ( (*(_DWORD *)(v8 + 1792) & 0x2000000) == 0 || *(_DWORD *)(v15[0] + 32LL) == 1 )
        v13 = 1;
    }
    v10 = v7 & 0xF0 | v13;
LABEL_29:
    if ( !v5 )
      goto LABEL_42;
    goto LABEL_30;
  }
  if ( a2 == 2 )
  {
    v10 = (unsigned __int8)v7 | 0x20;
    if ( !a3 )
      v10 = v7 & 0xDF;
    goto LABEL_34;
  }
  if ( (unsigned int)(a2 - 3) > 1 )
    goto LABEL_32;
  if ( ((a3 - 8) & 0xFFFFFFF7) == 0 )
  {
    v9 = 0x20000000;
    goto LABEL_29;
  }
  if ( a3 != 32 && a3 != 773 )
    goto LABEL_32;
  if ( !v8 || (v9 = 0x10000000, (*(_DWORD *)(v8 + 1792) & 0x4000000) == 0) )
  {
    v5 = 0;
    goto LABEL_29;
  }
  v10 = (unsigned __int8)v7 | 0x10;
  v12 = 0x20000000;
  if ( *(_DWORD *)(v15[0] + 32LL) != 1 )
  {
    v12 = 0x10000000;
    v10 = (unsigned __int8)v7;
  }
  v9 = v12;
LABEL_30:
  if ( a2 != 4 )
  {
LABEL_34:
    if ( (unsigned __int8)v7 != v10
      || (*(_DWORD *)(v15[0] + 120LL) & 0xF00) != v11
      || (*(_DWORD *)(v15[0] + 120LL) & 0xF0000000) != v9 )
    {
      *(_DWORD *)(v15[0] + 120LL) = v11 | v10 | v9;
      *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL) + 240LL) = v11 | v10 | v9 | *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL) + 240LL) & 0xF000;
      if ( (unsigned __int8)v7 != v10 )
      {
        v14 = *(_QWORD *)(v15[0] + 496LL);
        v20 = *(_QWORD *)(v15[0] + 88LL);
        if ( v20 )
        {
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v20);
          if ( v14 )
          {
            v20 = *(_QWORD *)(v14 + 128);
            if ( v20 )
              XEPALOBJ::vUpdateTime((XEPALOBJ *)&v20);
          }
        }
      }
    }
  }
LABEL_42:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
  if ( v18 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v18);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
  if ( v15[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v16);
  return v5;
}
