/*
 * XREFs of ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C02CEEE4
 * Callers:
 *     NtGdiGetAndSetDCDword @ 0x1C02A9B90 (NtGdiGetAndSetDCDword.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vComputePageXform@DC@@QEAAXXZ @ 0x1C02CF6CC (-vComputePageXform@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::iSetMapMode(DC *this, int a2)
{
  unsigned int v2; // r15d
  _DWORD *v5; // rcx
  unsigned int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdx
  Gre::Base *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // r8
  int v17; // xmm0_4
  int v18; // xmm0_4
  __int64 v19; // rax
  int v20; // xmm1_4
  __int64 v21; // rcx
  __int128 v22; // xmm0
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  INT v25; // ebx
  __int128 v26; // [rsp+28h] [rbp-29h] BYREF
  __int64 v27; // [rsp+38h] [rbp-19h]
  int v28; // [rsp+40h] [rbp-11h]
  _QWORD v29[2]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v30[40]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v31; // [rsp+80h] [rbp+2Fh]
  __int64 v32; // [rsp+88h] [rbp+37h]

  v2 = 0;
  if ( a2 != 8 )
  {
    v2 = *(_DWORD *)(*((_QWORD *)this + 122) + 108LL);
    if ( (v2 & 7) != 0 )
      DC::dwSetLayout(this, -1, 0);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 122);
  v6 = v5[26];
  if ( a2 != v6 )
  {
    if ( a2 == 1 )
    {
      v5[79] = 1;
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 122) + 332LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = ef16;
      v7 = *((_QWORD *)this + 122);
      *((_DWORD *)this + 107) = ef16;
      *(_DWORD *)(v7 + 396) = ef16;
      *((_DWORD *)this + 108) = ef16;
      *((_DWORD *)this + 80) = ef16;
      v8 = *((_QWORD *)this + 122);
      *((_DWORD *)this + 83) = ef16;
      *((_DWORD *)this + 88) = 11;
      *(_OWORD *)(v8 + 32) = *((_OWORD *)this + 20);
      *(_OWORD *)(v8 + 48) = *((_OWORD *)this + 21);
      *(_DWORD *)(v8 + 64) = *((_DWORD *)this + 88);
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x3090u;
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF8BF;
      goto LABEL_55;
    }
    if ( a2 == 8 )
    {
      v5[26] = 8;
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
      goto LABEL_55;
    }
    if ( (unsigned int)(a2 - 1) > 7 )
      return 0LL;
LABEL_12:
    v9 = v5[102];
    if ( !v9 )
    {
      v10 = *((_QWORD *)this + 6);
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v29);
      v32 = 0LL;
      v31 = 0LL;
      v29[0] = 0LL;
      v26 = 0LL;
      v28 = 1;
      if ( (*(_DWORD *)(v10 + 40) & 1) != 0 )
      {
        Gre::Base::Globals(v12);
        *(_QWORD *)&v26 = *(_QWORD *)(v10 + 48);
        v27 = v10;
        GreAcquireSemaphore(v26);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v26, 11LL);
      }
      *(_DWORD *)(*((_QWORD *)this + 122) + 332LL) = *(_DWORD *)(v10 + 2120);
      *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -*(_DWORD *)(v10 + 2124);
      if ( a2 == 2 )
      {
        v16 = 1374389535LL;
        *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2112) + 50) / 0x64u;
        v11 = (*(_DWORD *)(v10 + 2116) + 50) / 0x64u;
      }
      else
      {
        if ( a2 != 3 )
        {
          switch ( a2 )
          {
            case 4:
              v16 = 33818641LL;
              *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2112) + 127) / 0xFEu;
              v24 = *(_DWORD *)(v10 + 2116) + 127;
              LODWORD(v11) = (33818641 * (unsigned __int64)v24) >> 32;
              v23 = v24 / 0xFE;
              break;
            case 5:
              *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(v10 + 2112), 10, 254);
              v23 = EngMulDiv(*(_DWORD *)(v10 + 2116), 10, 254);
              break;
            case 6:
              *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(v10 + 2112), 144, 2540);
              *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(v10 + 2116), 144, 2540);
              if ( *((float *)this + 111) == 0.0 )
              {
                DC::vComputePageXform(this);
                v17 = *((_DWORD *)this + 108);
                *((_DWORD *)this + 111) = *((_DWORD *)this + 107);
                *((_DWORD *)this + 112) = v17;
              }
              *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 6;
              v18 = *((_DWORD *)this + 111);
              *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = v18;
              v19 = *((_QWORD *)this + 122);
              v20 = *((_DWORD *)this + 112);
              *((_DWORD *)this + 107) = v18;
              *(_DWORD *)(v19 + 396) = v20;
              v21 = *((_QWORD *)this + 122);
              *((_DWORD *)this + 80) = *((_DWORD *)this + 111);
              *((_DWORD *)this + 83) = *((_DWORD *)this + 112);
              *((_DWORD *)this + 88) = 9;
              v22 = *((_OWORD *)this + 20);
              *((_DWORD *)this + 108) = v20;
              *(_OWORD *)(v21 + 32) = v22;
              *(_OWORD *)(v21 + 48) = *((_OWORD *)this + 21);
              *(_DWORD *)(v21 + 64) = *((_DWORD *)this + 88);
              *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x22D0u;
              *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE2FF;
              goto LABEL_37;
            case 7:
              v16 = 1374389535LL;
              *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2112) + 50) / 0x64u;
              v11 = (*(_DWORD *)(v10 + 2116) + 50) / 0x64u;
              *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v11;
              *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
              *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
LABEL_36:
              *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = a2;
              *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x4090u;
LABEL_37:
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26, v11, v16, v14);
              if ( v29[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v29);
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v30);
              goto LABEL_55;
            default:
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26, v11, v13, v14);
              if ( v29[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v29);
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v30);
              return 0LL;
          }
          *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v23;
LABEL_35:
          *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
          *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
          goto LABEL_36;
        }
        v16 = 3435973837LL;
        *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2112) + 5) / 0xAu;
        v11 = (*(_DWORD *)(v10 + 2116) + 5) / 0xAu;
      }
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v11;
      goto LABEL_35;
    }
    v5[83] = v9;
    *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -*(_DWORD *)(*((_QWORD *)this + 122) + 412LL);
    if ( a2 == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
    }
    else if ( a2 == 3 )
    {
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
    }
    else
    {
      switch ( a2 )
      {
        case 4:
          v25 = 1000;
          break;
        case 5:
          v25 = 10000;
          break;
        case 6:
          v25 = 14400;
          break;
        case 7:
          *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
          *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
          *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
          *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
LABEL_54:
          *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = a2;
          *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x4090u;
LABEL_55:
          if ( (v2 & 7) != 0 )
            DC::dwSetLayout(this, -1, v2);
          goto LABEL_57;
        default:
          return 0LL;
      }
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 416LL), v25, 254);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 420LL), v25, 254);
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
    goto LABEL_54;
  }
  if ( a2 == 7 )
    goto LABEL_12;
LABEL_57:
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    DC::vMarkTransformDirty(this);
  return v6;
}
