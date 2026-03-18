/*
 * XREFs of ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x14007611C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     McTemplateK0qqqxxqtt_EtwWriteTransfer @ 0x1400759CC (McTemplateK0qqqxxqtt_EtwWriteTransfer.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140075FFC (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x140076824 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateExternalPrivateResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r12
  int v6; // edi
  struct DirectComposition::CResourceMarshaler *v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r13
  unsigned __int64 i; // rax
  size_t v11; // r8
  int *v12; // rdx
  __int64 v13; // rax
  __int64 j; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int *v17; // r14
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  size_t v21; // r8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rsi
  int v25; // eax
  char *v26; // rax
  char *v27; // r15
  unsigned __int64 v28; // kr00_8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // kr10_8
  __int64 v31; // r8
  char *v32; // rcx
  __int64 v33; // [rsp+68h] [rbp-18h] BYREF
  struct DirectComposition::CResourceMarshaler *Src; // [rsp+70h] [rbp-10h] BYREF
  struct DirectComposition::CResourceMarshaler *v36; // [rsp+D8h] [rbp+58h] BYREF

  v36 = 0LL;
  v3 = a3;
  v4 = a2;
  v6 = DirectComposition::CApplicationChannel::CreatePrivateMarshaler(this, a3, &v36);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = v36;
  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v36 + 32LL))(v36) )
  {
    v6 = DirectComposition::CConnection::AcquireShellResourceAccess(*((DirectComposition::CConnection **)this + 5));
    if ( v6 < 0 )
      goto LABEL_40;
  }
  v6 = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))v7)(v7);
  if ( v6 < 0 )
    goto LABEL_40;
  v8 = *((_QWORD *)this + 18);
  v6 = 0;
  if ( *((_QWORD *)this + 20) >= v8 )
  {
    v23 = v8 + 1;
    v9 = *((_QWORD *)this + 18);
    if ( v8 + 1 >= v8 )
    {
      v24 = *((_QWORD *)this + 17);
      if ( v23 <= v24 )
      {
LABEL_33:
        ++*((_QWORD *)this + 18);
        goto LABEL_10;
      }
      if ( !v24 )
        v24 = 64LL;
      while ( v24 < v23 )
      {
        if ( v24 >= 0x400 )
        {
          while ( v24 < v23 )
          {
            if ( v24 + 1024 < v24 )
              goto LABEL_39;
            v24 += 1024LL;
          }
          break;
        }
        v28 = v24;
        v24 *= 2LL;
        if ( !is_mul_ok(v28, 2uLL) )
          goto LABEL_39;
      }
      v30 = *((_QWORD *)this + 19);
      v29 = v24 * v30;
      v33 = (v24 * (unsigned __int128)v30) >> 64;
      if ( is_mul_ok(v24, v30) )
      {
        v6 = 0;
        if ( *((_BYTE *)this + 128) )
          v26 = (char *)Win32AllocPoolWithQuotaImpl(v8, v29, 0x746C4344u);
        else
          v26 = (char *)Win32AllocPoolImpl(0x100uLL, v29, 0x746C4344u);
        v27 = v26;
        if ( v26 )
        {
          v31 = *((_QWORD *)this + 18);
          if ( v31 )
            memmove(v26, *((const void **)this + 15), *((_QWORD *)this + 19) * v31);
          memset(
            &v27[*((_QWORD *)this + 18) * *((_QWORD *)this + 19)],
            0,
            *((_QWORD *)this + 19) * (v24 - *((_QWORD *)this + 18)));
          v32 = (char *)*((_QWORD *)this + 15);
          if ( v32 )
            GreDeleteFastMutex(v32);
          *((_QWORD *)this + 15) = v27;
          v3 = a3;
          *((_QWORD *)this + 17) = v24;
          goto LABEL_33;
        }
        v3 = a3;
      }
    }
LABEL_39:
    v6 = -1073741801;
LABEL_40:
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 96LL))(v7, 1LL);
    goto LABEL_21;
  }
  v9 = *((_QWORD *)this + 21);
  for ( i = v9 * *((_QWORD *)this + 19); *(_QWORD *)(i + *((_QWORD *)this + 15)); i = v9 * *((_QWORD *)this + 19) )
    v9 = (v9 + 1) % v8;
  *((_QWORD *)this + 21) = (v9 + 1) % v8;
LABEL_10:
  v11 = *((_QWORD *)this + 19);
  Src = v7;
  memmove((void *)(*((_QWORD *)this + 15) + v9 * v11), &Src, v11);
  *((_DWORD *)v7 + 8) = v9 + 1;
  ++*((_QWORD *)this + 20);
  if ( *((int *)this + 6) <= 2 )
  {
    v13 = *((unsigned int *)v7 + 9);
    v12 = dword_140270F80;
    while ( (unsigned int)v13 < 0xC2 )
    {
      if ( (_DWORD)v13 == 158 )
      {
        v15 = 448LL;
        goto LABEL_20;
      }
      LODWORD(v13) = dword_140270F80[v13];
    }
    for ( j = *((unsigned int *)v7 + 9); ; LODWORD(j) = dword_140270F80[j] )
    {
      if ( (unsigned int)j >= 0xC2 )
      {
        v15 = 432LL;
        goto LABEL_20;
      }
      if ( (_DWORD)j == 28 )
        break;
    }
    v15 = 464LL;
LABEL_20:
    *((_QWORD *)v7 + 1) = *(_QWORD *)((char *)this + v15);
    *(_QWORD *)((char *)this + v15) = v7;
  }
LABEL_21:
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( v3 == 2 )
  {
    v16 = *(_QWORD *)((*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, int *))(*(_QWORD *)v36 + 104LL))(
                        v36,
                        v12)
                    + 80);
    if ( (*(_DWORD *)(v16 + 24) & 1) == 0 )
    {
      *(_QWORD *)(v16 + 8) = *((_QWORD *)this + 61);
      *((_QWORD *)this + 61) = v16;
      *(_DWORD *)(v16 + 24) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 48));
    }
  }
  v17 = (unsigned int *)v36;
  v18 = (_QWORD *)((char *)this + 64);
  v6 = 0;
  if ( !(_DWORD)v4 )
  {
    v6 = -1073741811;
    goto LABEL_63;
  }
  v19 = *((_QWORD *)this + 11);
  if ( v4 <= v19 )
  {
    v20 = v4 - 1;
    if ( !*(_QWORD *)(*((_QWORD *)this + 12) * (unsigned int)(v4 - 1) + *v18) )
      goto LABEL_28;
    v6 = -1073741790;
LABEL_63:
    DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)v17);
    return (unsigned int)v6;
  }
  v25 = DirectComposition::CDCompDynamicArrayBase::Grow(
          (DirectComposition::CApplicationChannel *)((char *)this + 64),
          v4 - v19,
          0x746C4344u);
  v20 = v4 - 1;
  v6 = v25;
  if ( v25 < 0 )
    goto LABEL_63;
LABEL_28:
  v21 = *((_QWORD *)this + 12);
  v33 = (__int64)v17;
  memmove((void *)(*v18 + v21 * v20), &v33, v21);
  ++*((_QWORD *)this + 13);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000000LL) != 0 )
    McTemplateK0qqqxxqtt_EtwWriteTransfer(
      (unsigned __int64)*((unsigned int *)this + 7) << 32,
      ((unsigned __int64)*((unsigned int *)this + 7) << 32) | v4 | 0x8000000000000000uLL,
      v17[8],
      *((_DWORD *)this + 7),
      v17[8],
      v4,
      v17[8],
      v4,
      v3,
      0,
      0);
  return (unsigned int)v6;
}
