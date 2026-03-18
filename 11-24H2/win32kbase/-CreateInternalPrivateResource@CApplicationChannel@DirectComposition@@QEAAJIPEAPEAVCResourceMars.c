/*
 * XREFs of ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400768D8
 * Callers:
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x14004AA6C (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x140072938 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1400755E4 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140075AB0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x140076824 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalPrivateResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  int v6; // edi
  struct DirectComposition::CResourceMarshaler *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r15
  unsigned __int64 i; // rax
  size_t v14; // r8
  int *v15; // rdx
  __int64 v16; // rax
  __int64 j; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rsi
  char *v23; // rax
  char *v24; // rbp
  unsigned __int64 v25; // kr00_8
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  char *v28; // rcx
  struct DirectComposition::CResourceMarshaler *Src; // [rsp+30h] [rbp-38h] BYREF
  struct DirectComposition::CResourceMarshaler *v30; // [rsp+88h] [rbp+20h] BYREF

  v30 = 0LL;
  v6 = DirectComposition::CApplicationChannel::CreatePrivateMarshaler(this, a2, &v30);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = v30;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v30 + 32LL))(v30)
    || (v6 = DirectComposition::CConnection::AcquireShellResourceAccess(*((PERESOURCE **)this + 5), v8, v9, v10), v6 >= 0) )
  {
    v6 = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))v7)(v7);
    if ( v6 >= 0 )
    {
      v11 = *((_QWORD *)this + 18);
      v6 = 0;
      if ( *((_QWORD *)this + 20) < v11 )
      {
        v12 = *((_QWORD *)this + 21);
        for ( i = v12 * *((_QWORD *)this + 19); *(_QWORD *)(i + *((_QWORD *)this + 15)); i = v12
                                                                                           * *((_QWORD *)this + 19) )
          v12 = (v12 + 1) % v11;
        *((_QWORD *)this + 21) = (v12 + 1) % v11;
LABEL_10:
        v14 = *((_QWORD *)this + 19);
        Src = v7;
        memmove((void *)(*((_QWORD *)this + 15) + v12 * v14), &Src, v14);
        *((_DWORD *)v7 + 8) = v12 + 1;
        ++*((_QWORD *)this + 20);
        if ( *((int *)this + 6) <= 2 )
        {
          v16 = *((unsigned int *)v7 + 9);
          v15 = dword_140270F80;
          while ( (unsigned int)v16 < 0xC2 )
          {
            if ( (_DWORD)v16 == 158 )
            {
              v18 = 448LL;
              goto LABEL_20;
            }
            LODWORD(v16) = dword_140270F80[v16];
          }
          for ( j = *((unsigned int *)v7 + 9); ; LODWORD(j) = dword_140270F80[j] )
          {
            if ( (unsigned int)j >= 0xC2 )
            {
              v18 = 432LL;
              goto LABEL_20;
            }
            if ( (_DWORD)j == 28 )
              break;
          }
          v18 = 464LL;
LABEL_20:
          *((_QWORD *)v7 + 1) = *(_QWORD *)((char *)this + v18);
          *(_QWORD *)((char *)this + v18) = v7;
        }
        goto LABEL_21;
      }
      v21 = v11 + 1;
      v12 = *((_QWORD *)this + 18);
      if ( v11 + 1 >= v11 )
      {
        v22 = *((_QWORD *)this + 17);
        if ( v21 <= v22 )
        {
LABEL_29:
          ++*((_QWORD *)this + 18);
          goto LABEL_10;
        }
        if ( !v22 )
          v22 = 64LL;
        while ( v22 < v21 )
        {
          if ( v22 >= 0x400 )
          {
            while ( v22 < v21 )
            {
              if ( v22 + 1024 < v22 )
                goto LABEL_32;
              v22 += 1024LL;
            }
            break;
          }
          v25 = v22;
          v22 *= 2LL;
          if ( !is_mul_ok(v25, 2uLL) )
            goto LABEL_32;
        }
        v26 = v22 * *((_QWORD *)this + 19);
        if ( is_mul_ok(v22, *((_QWORD *)this + 19)) )
        {
          v6 = 0;
          v23 = (char *)(*((_BYTE *)this + 128)
                       ? Win32AllocPoolWithQuotaImpl(v11, v26, 0x746C4344u)
                       : Win32AllocPoolImpl(0x100uLL, v26, 0x746C4344u));
          v24 = v23;
          if ( v23 )
          {
            v27 = *((_QWORD *)this + 18);
            if ( v27 )
              memmove(v23, *((const void **)this + 15), *((_QWORD *)this + 19) * v27);
            memset(
              &v24[*((_QWORD *)this + 18) * *((_QWORD *)this + 19)],
              0,
              *((_QWORD *)this + 19) * (v22 - *((_QWORD *)this + 18)));
            v28 = (char *)*((_QWORD *)this + 15);
            if ( v28 )
              GreDeleteFastMutex(v28);
            *((_QWORD *)this + 15) = v24;
            *((_QWORD *)this + 17) = v22;
            goto LABEL_29;
          }
        }
      }
LABEL_32:
      v6 = -1073741801;
    }
  }
  (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 96LL))(v7, 1LL);
LABEL_21:
  if ( v6 >= 0 )
  {
    if ( a2 == 2 )
    {
      v19 = *(_QWORD *)((*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, int *))(*(_QWORD *)v30 + 104LL))(
                          v30,
                          v15)
                      + 80);
      if ( (*(_DWORD *)(v19 + 24) & 1) == 0 )
      {
        *(_QWORD *)(v19 + 8) = *((_QWORD *)this + 61);
        *((_QWORD *)this + 61) = v19;
        *(_DWORD *)(v19 + 24) |= 1u;
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 48));
      }
    }
    *a3 = v30;
  }
  return (unsigned int)v6;
}
