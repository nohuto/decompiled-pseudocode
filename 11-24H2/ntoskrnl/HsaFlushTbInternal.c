/*
 * XREFs of HsaFlushTbInternal @ 0x14043E458
 * Callers:
 *     HsaAttachDeviceDomainInternal @ 0x14043E2A0 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushDomainTb @ 0x14043E420 (HsaFlushDomainTb.c)
 *     HsaFlushTb @ 0x1405700F0 (HsaFlushTb.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     HsaIommuWaitCommand @ 0x14043E718 (HsaIommuWaitCommand.c)
 *     HsaIommuSendCommand @ 0x14043E74C (HsaIommuSendCommand.c)
 *     HalpIommuGetNextFlushDevice @ 0x1404F7A44 (HalpIommuGetNextFlushDevice.c)
 */

void __fastcall HsaFlushTbInternal(
        _QWORD *a1,
        int a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  _QWORD *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  char v13; // r14
  __int64 v14; // r13
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  int v17; // r12d
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // edx
  _BYTE *v21; // r12
  __int64 v22; // rax
  char NextFlushDevice; // al
  char v24; // r13
  struct _EX_RUNDOWN_REF *v25; // rcx
  char v26; // [rsp+48h] [rbp-49h] BYREF
  char v27; // [rsp+49h] [rbp-48h]
  _BYTE v28[2]; // [rsp+4Ah] [rbp-47h] BYREF
  int v29; // [rsp+4Ch] [rbp-45h] BYREF
  int v30; // [rsp+50h] [rbp-41h]
  int v31; // [rsp+54h] [rbp-3Dh]
  _BYTE *v32; // [rsp+58h] [rbp-39h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+60h] [rbp-31h] BYREF
  __int64 v34; // [rsp+68h] [rbp-29h]
  __int64 v35; // [rsp+70h] [rbp-21h] BYREF
  __int64 v36; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp-11h] BYREF
  __int64 v38; // [rsp+88h] [rbp-9h]
  unsigned __int64 v39; // [rsp+90h] [rbp-1h] BYREF
  __int64 v40; // [rsp+98h] [rbp+7h]
  unsigned __int64 v41; // [rsp+A0h] [rbp+Fh]

  RunRef = 0LL;
  v32 = 0LL;
  v9 = a1;
  v30 = 0;
  v10 = *a1;
  v29 = 0;
  v35 = 0LL;
  if ( (*(_QWORD *)(v10 + 8224) & 0x10) == 0 )
    return;
  LOWORD(v11) = 2;
  LOWORD(v12) = 0;
  v34 = 2LL;
  v38 = 2LL;
  v40 = 0LL;
  v37 = ((unsigned __int64)a3 << 32) | 0x3000000000000000LL;
  v41 = 0x4000000000000000LL;
  if ( a4 )
    goto LABEL_4;
  if ( a2 != -1 )
  {
    LOWORD(v11) = 6;
    v34 = 6LL;
    v38 = 6LL;
    v37 = ((unsigned __int64)a3 << 32) | a2 & 0xFFFFF | 0x3000000000000000LL;
    LOWORD(v12) = 4;
    v40 = 4LL;
    v41 = ((unsigned __int16)a2 & 0xFF00 | ((a2 & 0xF0000 | ((unsigned __int64)(unsigned __int8)a2 << 8)) << 32) | 0x40000000000000LL) << 8;
LABEL_4:
    if ( a7 )
    {
      v13 = 1;
    }
    else
    {
      v11 = v11 & 0xFFE | 0x7FFFFFFFFFFFF001LL;
      v13 = 0;
      v38 = v11;
      v12 = v12 & 0xFFE | 0x7FFFFFFFFFFFF001LL;
      v34 = v11;
      v40 = v12;
    }
    goto LABEL_6;
  }
  v13 = 0;
  LOWORD(v11) = -4093;
  v34 = 0x7FFFFFFFFFFFF003LL;
  v38 = 0x7FFFFFFFFFFFF003LL;
LABEL_6:
  v14 = a5;
  if ( a5 || (v27 = 0, a6) )
    v27 = 1;
  v28[0] = 0;
  v15 = 0LL;
  v30 = 0;
  v16 = 0LL;
  v31 = 0;
  while ( 1 )
  {
    if ( v13 )
    {
      v18 = *(_QWORD *)(a8 + 8 * v16);
      v15 = v18 >> 12;
      LODWORD(v19) = 9 * ((v18 >> 10) & 3);
      v20 = v18 & 0x3FF;
      if ( v20 )
      {
        _BitScanReverse64((unsigned __int64 *)&v19, v15 ^ (v15 + v20 * (1LL << v19)));
        LODWORD(v19) = v19 + 1;
        v15 &= ~((1LL << v19) - 1);
      }
      v30 = v19;
      if ( (_DWORD)v19 )
      {
        v17 = 1;
        v15 |= (1LL << ((unsigned __int8)v19 - 1)) - 1;
      }
      else
      {
        v17 = 0;
      }
      v30 = v17;
      v38 = (v15 << 12) | v11 & 0xFFE | v17 & 1;
LABEL_18:
      HsaIommuSendCommand(v9, &v37, 0LL);
      LOWORD(v11) = v38;
      LODWORD(v16) = v31;
      v34 = v38;
      goto LABEL_19;
    }
    if ( !(_DWORD)v16 )
      goto LABEL_18;
LABEL_19:
    if ( v27 && (v13 || !(_DWORD)v16) )
    {
      v36 = a6;
      if ( v14 )
      {
        v21 = v28;
        v35 = *(_QWORD *)(v14 + 48);
        v29 = *(_DWORD *)(v14 + 60);
        RunRef = (PEX_RUNDOWN_REF)(v14 + 64);
        v22 = *(_QWORD *)(v14 + 96);
        v32 = v28;
        NextFlushDevice = *(_BYTE *)(v22 + 48) & 1;
      }
      else
      {
        NextFlushDevice = HalpIommuGetNextFlushDevice(
                            a6,
                            (unsigned int)&v36,
                            (unsigned int)&v35,
                            (unsigned int)&v29,
                            (__int64)&v26,
                            (__int64)&RunRef,
                            (__int64)&v32);
        v21 = v32;
      }
      if ( NextFlushDevice )
      {
        v24 = v30;
        v11 = v41;
        while ( 1 )
        {
          if ( !*v21 )
          {
            if ( !ExAcquireRundownProtection_0(RunRef) )
              goto LABEL_48;
            *v21 = 1;
          }
          v39 = (unsigned __int16)v35 | v11 & 0xFFFF000000FF0000uLL | ((((unsigned __int64)(unsigned __int16)v35 << 8) | (unsigned __int8)v29) << 24);
          if ( v13 )
            v40 = (v15 << 12) | v12 & 0xFFE | v24 & 1;
          HsaIommuSendCommand(a1, &v39, 0LL);
          LOWORD(v12) = v40;
          v11 = v39;
LABEL_48:
          if ( !a6
            || !(unsigned __int8)HalpIommuGetNextFlushDevice(
                                   a6,
                                   (unsigned int)&v36,
                                   (unsigned int)&v35,
                                   (unsigned int)&v29,
                                   (__int64)&v26,
                                   (__int64)&RunRef,
                                   (__int64)&v32) )
          {
            v14 = a5;
            v41 = v11;
            LOWORD(v11) = v34;
            break;
          }
          v21 = v32;
        }
      }
      LODWORD(v16) = v31;
    }
    v16 = (unsigned int)(v16 + 1);
    v31 = v16;
    if ( (unsigned int)v16 >= a7 )
      break;
    v9 = a1;
  }
  HsaIommuWaitCommand(a1, 0LL, 4094LL, v9);
  if ( v28[0] )
  {
    RunRef = (PEX_RUNDOWN_REF)(v14 + 64);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v14 + 64));
  }
  if ( a6 )
  {
    v36 = a6;
    while ( (unsigned __int8)HalpIommuGetNextFlushDevice(
                               a6,
                               (unsigned int)&v36,
                               (unsigned int)&v35,
                               (unsigned int)&v29,
                               (__int64)&v26,
                               (__int64)&RunRef,
                               (__int64)&v32) )
    {
      if ( *v32 )
      {
        v25 = RunRef;
        *v32 = 0;
        ExReleaseRundownProtection_0(v25);
      }
    }
  }
}
