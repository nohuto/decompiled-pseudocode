/*
 * XREFs of ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180198B68
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1801989A4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180199220 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801992D0 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CResourceTable::ReleaseHandleTableEntries(
        CResourceTable *this,
        struct CComposition *a2,
        struct CChannelContext *a3)
{
  unsigned int v3; // eax
  char v4; // dl
  unsigned int v5; // ebx
  struct CChannelContext *v6; // r14
  __int64 v8; // rax
  __int64 v10; // rcx
  CNotificationResource *v11; // rcx
  void (__fastcall *v12)(CResource *__hidden, struct CChannelContext *, bool); // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // eax
  _DWORD *v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  CResource *v23; // rcx
  void (*v24)(void); // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax

  v3 = *((_DWORD *)this + 7);
  v4 = 0;
  v5 = 0;
  v6 = a3;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( !v5 )
        goto LABEL_5;
      if ( v5 >= v3 )
        goto LABEL_5;
      v8 = *((_QWORD *)this + 5);
      if ( !*(_DWORD *)(*((_DWORD *)this + 6) * v5 + v8) )
        goto LABEL_5;
      v10 = v8 + *((_DWORD *)this + 6) * v5;
      if ( !v10 )
        goto LABEL_5;
      v11 = *(CNotificationResource **)(v10 + 8);
      if ( !v11 )
        goto LABEL_5;
      LOBYTE(a3) = 1;
      v12 = *(void (__fastcall **)(CResource *__hidden, struct CChannelContext *, bool))(*(_QWORD *)v11 + 168LL);
      if ( v12 == CNotificationResource::DetachFromChannel )
      {
        CNotificationResource::DetachFromChannel(v11, v6, 1);
      }
      else if ( v12 == CResource::DetachFromChannel )
      {
        CResource::DetachFromChannel(v11, v6, 1);
      }
      else
      {
        v12(v11, v6, (bool)a3);
      }
      v13 = *((_QWORD *)v6 + 6);
      if ( v5 < *(_DWORD *)(v13 + 28) )
      {
        v14 = *(_QWORD *)(v13 + 40);
        if ( *(_DWORD *)(*(_DWORD *)(v13 + 24) * v5 + v14) )
        {
          v15 = v14 + *(_DWORD *)(v13 + 24) * v5;
          if ( v15 )
            break;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x8F3u, 0LL);
LABEL_14:
      v4 = 1;
LABEL_5:
      v3 = *((_DWORD *)this + 7);
      if ( ++v5 >= v3 )
        return v4;
    }
    v16 = *(_DWORD *)v15;
    if ( !*(_QWORD *)(v15 + 8) )
    {
LABEL_36:
      memset_0((void *)(*(_QWORD *)(v13 + 40) + v5 * *(_DWORD *)(v13 + 24)), 0, *(unsigned int *)(v13 + 24));
      goto LABEL_14;
    }
    v17 = *(_DWORD **)(v13 + 56);
    if ( v16 <= 0x2D )
    {
      if ( v16 != 45 )
      {
        if ( v16 == 32 || v16 == 33 || v16 == 36 || v16 == 38 || v16 == 40 )
        {
          --v17[30];
LABEL_47:
          v25 = v16 - 32;
          if ( !v25 || (v26 = v25 - 1) == 0 || (v27 = v26 - 3) == 0 || (v28 = v27 - 2) == 0 || (v29 = v28 - 2) == 0 )
          {
            --dword_180406E58;
            goto LABEL_33;
          }
          if ( v29 != 1 )
            goto LABEL_32;
LABEL_45:
          --dword_180406E5C;
          goto LABEL_33;
        }
        if ( v16 == 41 )
        {
          --v17[31];
          goto LABEL_45;
        }
        goto LABEL_24;
      }
    }
    else
    {
      if ( v16 == 91 )
      {
        --v17[29];
        goto LABEL_57;
      }
      if ( v16 == 92 )
        goto LABEL_55;
      if ( v16 != 163 )
      {
        if ( v16 != 164 && v16 != 182 && v16 != 190 )
        {
LABEL_24:
          --v17[27];
LABEL_25:
          if ( v16 > 0x2D )
            goto LABEL_26;
          if ( v16 == 45 )
            goto LABEL_60;
          goto LABEL_47;
        }
LABEL_55:
        --v17[28];
LABEL_26:
        v18 = v16 - 91;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
            goto LABEL_54;
          v20 = v19 - 71;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 18;
              if ( v22 )
              {
                if ( v22 != 8 )
                {
LABEL_32:
                  --dword_180406E4C;
LABEL_33:
                  v23 = *(CResource **)(v15 + 8);
                  v24 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
                  if ( (char *)v24 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
                    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v23);
                  else
                    v24();
                  *(_QWORD *)(v15 + 8) = 0LL;
                  goto LABEL_36;
                }
              }
            }
LABEL_54:
            --dword_180406E50;
            goto LABEL_33;
          }
LABEL_60:
          --dword_180406E48;
          goto LABEL_33;
        }
LABEL_57:
        --dword_180406E54;
        goto LABEL_33;
      }
    }
    --v17[26];
    goto LABEL_25;
  }
  return v4;
}
