/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180029AE0
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180028DD8 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x1800289EC (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180029EE4 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18002AC98 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002EA28 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  unsigned int v2; // ebx
  bool v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int v7; // esi
  _WORD *v9; // rcx
  __int64 v10; // rax
  CDWMDisplay *v11; // rax
  CDWMDisplay *v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // edi
  __int64 v16; // rdi
  int updated; // eax
  int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-68h]
  CDWMDisplay *v23[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  v23[0] = 0LL;
  v3 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 48LL)) != 0;
  v4 = 0;
  v5 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v5 + 80) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL * v4);
      v7 = 0;
      if ( *(_DWORD *)(v6 + 376) )
        break;
LABEL_3:
      ++v4;
      v5 = *((_QWORD *)this + 1);
      if ( v4 >= *(_DWORD *)(v5 + 80) )
        goto LABEL_4;
    }
    while ( 1 )
    {
      v16 = *(_QWORD *)(v6 + 352) + 304LL * v7;
      updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v16);
      v2 = updated;
      if ( updated < 0 )
        break;
      if ( *(_DWORD *)(v16 + 204) || *(_DWORD *)(v16 + 208) || *(_DWORD *)(v16 + 212) || *(_DWORD *)(v16 + 216) )
      {
        v24 = 0LL;
        if ( (unsigned int)GetUniformSpaceMapping(*(_QWORD *)(v16 + 104), &v24) )
          *(_OWORD *)(v16 + 204) = v24;
        if ( *(char *)(v16 + 220) >= 0 )
        {
          CAnalogCompositorManager::GetInstance();
          v9 = (_WORD *)(v16 + 224);
          if ( v16 == -224 )
            goto LABEL_38;
          v10 = 32LL;
          do
          {
            if ( !*v9 )
              break;
            ++v9;
            --v10;
          }
          while ( v10 );
          if ( !v10 )
          {
LABEL_38:
            v19 = 60;
            goto LABEL_39;
          }
          if ( ((2 * (32 - v10)) & (unsigned __int64)-(__int64)(v10 != 0)) < 2 )
          {
            v19 = 65;
LABEL_39:
            v18 = -2147024809;
            v2 = -2147024809;
            v15 = -2147024809;
LABEL_40:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v19, 0LL);
            v22 = 267;
            goto LABEL_41;
          }
          if ( (*(_BYTE *)(v16 + 220) & 8) != 0 && !*(_QWORD *)(v16 + 104) )
          {
            v2 = -2003304442;
            v15 = -2003304442;
            v18 = -2003304442;
            v19 = 74;
            goto LABEL_40;
          }
          v11 = (CDWMDisplay *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 280LL);
          v23[1] = v11;
          if ( v11 )
            v12 = CDWMDisplay::CDWMDisplay(v11, v3, (struct CDWMDXGIAdapter *)v6, (const struct DXGIOutputInfo *)v16);
          else
            v12 = 0LL;
          v23[0] = v12;
          if ( !v12 )
          {
            v2 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x113u, 0LL);
            goto LABEL_4;
          }
          v13 = *((_DWORD *)this + 16);
          v14 = v13 + 1;
          if ( v13 + 1 < v13 )
          {
            v2 = -2147024362;
            v15 = -2147024362;
            v20 = 181;
LABEL_37:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v20, 0LL);
            v22 = 277;
LABEL_41:
            v21 = v15;
            goto LABEL_45;
          }
          v15 = 0;
          if ( v14 <= *((_DWORD *)this + 15) )
          {
            *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v12;
            *((_DWORD *)this + 16) = v14;
          }
          else
          {
            v15 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 40, 8LL, 1LL, v23);
            v2 = v15;
            if ( v15 < 0 )
            {
              v20 = 192;
              goto LABEL_37;
            }
          }
          v2 = v15;
          v23[0] = 0LL;
        }
      }
      if ( ++v7 >= *(_DWORD *)(v6 + 376) )
        goto LABEL_3;
    }
    v22 = 242;
    v21 = updated;
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v22, 0LL);
  }
LABEL_4:
  if ( v23[0] )
    CDWMDisplay::Release(v23[0]);
  return v2;
}
