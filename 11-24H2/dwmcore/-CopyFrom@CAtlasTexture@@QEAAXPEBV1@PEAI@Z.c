/*
 * XREFs of ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801CCB30
 * Callers:
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1801CC8B8 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801CCA14 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18003DE60 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z @ 0x18006368C (-GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     ?IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1801CCDCC (-IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 *     ?IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1801CCDFC (-IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1801CCE2C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAtlasTexture::CopyFrom(__int64 **this, const struct CAtlasTexture *a2, unsigned int *a3)
{
  unsigned int *v4; // rbx
  unsigned int v6; // esi
  unsigned int v7; // r14d
  unsigned int v8; // r10d
  unsigned int v9; // r12d
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  int v12; // r10d
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rbx
  int v17; // eax
  __int64 *v18; // rdi
  void (__fastcall *v19)(__int64, FastRegion::CRegion **); // rbx
  unsigned int v20; // eax
  struct IDeviceTexture *v21; // rcx
  unsigned int v22; // esi
  unsigned int v23; // r8d
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+54h] [rbp-75h]
  unsigned int v28; // [rsp+5Ch] [rbp-6Dh]
  struct IDeviceTexture *v29; // [rsp+60h] [rbp-69h] BYREF
  struct IDeviceTexture *v30; // [rsp+68h] [rbp-61h] BYREF
  __int64 v31; // [rsp+70h] [rbp-59h] BYREF
  __int64 v32; // [rsp+78h] [rbp-51h]
  unsigned int *v33; // [rsp+80h] [rbp-49h]
  FastRegion::CRegion *v34; // [rsp+90h] [rbp-39h] BYREF
  char v35; // [rsp+98h] [rbp-31h] BYREF

  v4 = a3;
  v33 = a3;
  v30 = 0LL;
  CAtlasTexture::GetDeviceTexture(a2, &v30);
  v29 = 0LL;
  CAtlasTexture::GetDeviceTexture((CAtlasTexture *)this, &v29);
  v6 = *v4;
  v28 = *((_DWORD *)a2 + 6) + 1;
  v31 = 0LL;
  v32 = 2048LL;
  if ( v6 < v28 )
  {
    v7 = v6 != 0;
    while ( 1 )
    {
      if ( CAtlasTexture::IsInUseEntryInRow(a2, v6) )
      {
        while ( v7 < v8 && !CAtlasTexture::IsFreeEntryInRow((CAtlasTexture *)this, v7) )
          ++v7;
        v9 = 0;
        if ( !CAtlasTexture::IsInUseEntryInRow(a2, v6) )
          goto LABEL_13;
        v10 = v6;
        v11 = v7 - v6;
        do
        {
          if ( !CAtlasTexture::IsFreeEntryInRow((CAtlasTexture *)this, v11 + v10) )
            break;
          ++v9;
        }
        while ( CAtlasTexture::IsInUseEntryInRow(a2, v12 + 1) );
        if ( !v9 )
        {
LABEL_13:
          v4 = v33;
          break;
        }
        v13 = this[1];
        v27 = v9 + v6;
        HIDWORD(v32) = v9 + v6;
        v14 = *v13;
        HIDWORD(v31) = v6;
        v15 = (*(__int64 (__fastcall **)(__int64 *))(v14 + 40))(v13);
        v16 = (*(__int64 (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v29 + 120LL))(v29);
        v17 = (*(__int64 (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v30 + 120LL))(v30);
        CD3DDevice::CopySubresourceRegion(v15, v17, 0, (unsigned int)&v31, v16, 0, 0, v7, 1);
        v18 = this[1];
        v19 = *(void (__fastcall **)(__int64, FastRegion::CRegion **))(v18[1] + 72);
        v34 = (FastRegion::CRegion *)&v35;
        FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)&v34, 0, v7, 2048, v9 + v7);
        v19((__int64)(v18 + 1), &v34);
        FastRegion::CRegion::FreeMemory(&v34);
        v20 = v6 == 0;
        if ( v20 < v9 )
        {
          v22 = v6 - v7;
          v23 = v20 + v7;
          v24 = v9 - v20;
          do
          {
            v25 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * (v22 + v23 - 1));
            v26 = v23 - 1;
            *(_DWORD *)(v25 + 16) = v23++;
            *(_QWORD *)v25 = this;
            this[2][v26] = v25;
            --*((_DWORD *)this + 7);
            --v24;
          }
          while ( v24 );
        }
        v6 = v27;
        v7 += v9;
      }
      else
      {
        ++v6;
      }
      if ( v6 >= v28 )
        goto LABEL_13;
    }
  }
  v21 = v29;
  *v4 = v6;
  if ( v21 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v30 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v30 + 16LL))(v30);
}
