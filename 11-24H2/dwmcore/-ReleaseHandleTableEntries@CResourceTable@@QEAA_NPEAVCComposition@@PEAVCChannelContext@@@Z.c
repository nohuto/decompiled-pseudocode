/*
 * XREFs of ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18019E3B8
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18019E1F4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18019EA80 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18019EB30 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // eax
  _DWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  CCachedVisualImage *v24; // rcx
  void (*v25)(void); // rax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax

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
      v14 = *((_QWORD *)v6 + 6);
      if ( v5 < *(_DWORD *)(v14 + 28) )
      {
        v15 = *(_QWORD *)(v14 + 40);
        if ( *(_DWORD *)(*(_DWORD *)(v14 + 24) * v5 + v15) )
        {
          v16 = v15 + *(_DWORD *)(v14 + 24) * v5;
          if ( v16 )
            break;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x8FAu, 0LL);
LABEL_14:
      v4 = 1;
LABEL_5:
      v3 = *((_DWORD *)this + 7);
      if ( ++v5 >= v3 )
        return v4;
    }
    v17 = *(_DWORD *)v16;
    if ( !*(_QWORD *)(v16 + 8) )
    {
LABEL_36:
      memset_0((void *)(*(_QWORD *)(v14 + 40) + v5 * *(_DWORD *)(v14 + 24)), 0, *(unsigned int *)(v14 + 24));
      goto LABEL_14;
    }
    v18 = *(_DWORD **)(v14 + 56);
    if ( v17 <= 0x2E )
    {
      if ( v17 != 46 )
      {
        if ( v17 == 32 || v17 == 33 || v17 == 36 || v17 == 39 || v17 == 41 )
        {
          --v18[30];
LABEL_47:
          v26 = v17 - 32;
          if ( !v26 || (v27 = v26 - 1) == 0 || (v28 = v27 - 3) == 0 || (v29 = v28 - 3) == 0 || (v30 = v29 - 2) == 0 )
          {
            --dword_1803FAE48;
            goto LABEL_33;
          }
          if ( v30 != 1 )
            goto LABEL_32;
LABEL_45:
          --dword_1803FAE4C;
          goto LABEL_33;
        }
        if ( v17 == 42 )
        {
          --v18[31];
          goto LABEL_45;
        }
        goto LABEL_24;
      }
    }
    else
    {
      if ( v17 == 92 )
      {
        --v18[29];
        goto LABEL_57;
      }
      if ( v17 == 93 )
        goto LABEL_55;
      if ( v17 != 165 )
      {
        if ( v17 != 166 && v17 != 184 && v17 != 192 )
        {
LABEL_24:
          --v18[27];
LABEL_25:
          if ( v17 > 0x2E )
            goto LABEL_26;
          if ( v17 == 46 )
            goto LABEL_60;
          goto LABEL_47;
        }
LABEL_55:
        --v18[28];
LABEL_26:
        v19 = v17 - 92;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
            goto LABEL_54;
          v21 = v20 - 72;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 18;
              if ( v23 )
              {
                if ( v23 != 8 )
                {
LABEL_32:
                  --dword_1803FAE3C;
LABEL_33:
                  v24 = *(CCachedVisualImage **)(v16 + 8);
                  v25 = *(void (**)(void))(*(_QWORD *)v24 + 16LL);
                  if ( (char *)v25 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
                    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
                      v24,
                      (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
                      v13);
                  else
                    v25();
                  *(_QWORD *)(v16 + 8) = 0LL;
                  goto LABEL_36;
                }
              }
            }
LABEL_54:
            --dword_1803FAE40;
            goto LABEL_33;
          }
LABEL_60:
          --dword_1803FAE38;
          goto LABEL_33;
        }
LABEL_57:
        --dword_1803FAE44;
        goto LABEL_33;
      }
    }
    --v18[26];
    goto LABEL_25;
  }
  return v4;
}
