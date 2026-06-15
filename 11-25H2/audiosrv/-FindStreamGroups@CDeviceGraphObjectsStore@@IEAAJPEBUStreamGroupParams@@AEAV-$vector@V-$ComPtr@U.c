/*
 * XREFs of ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800246AC
 * Callers:
 *     ?FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800F4B50 (-FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1800239DC (--$_Emplace_reallocate@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ??$_Construct_in_place@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV123@@std@@YAXAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x1800A65D4 (--$_Construct_in_place@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV123@@std@@YAXAEAV-$ComP.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800ABC2C (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroups(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // r13
  __int64 *i; // rsi
  __int64 v8; // rbx
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // r14
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int16 *v15; // r14
  __int64 v16; // rdi
  const void *v17; // rax
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-50h] BYREF
  int (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-48h] BYREF
  int v40; // [rsp+30h] [rbp-40h] BYREF
  __int64 v41; // [rsp+38h] [rbp-38h] BYREF
  __int64 v42; // [rsp+40h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+48h] [rbp-28h]
  _BYTE v44[16]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v5 = a1;
  v42 = a1;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v43 = v6;
  for ( i = *(__int64 **)(v5 + 72); i != *(__int64 **)(v5 + 80); ++i )
  {
    v8 = *i;
    v41 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = 0LL;
    v39 = 0LL;
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
              v8,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              (__int64 *)&v39);
      v9 = v39;
    }
    else
    {
      v10 = 0;
    }
    if ( v10 < 0 || !v9 )
      goto LABEL_42;
    v38 = 0LL;
    v11 = **v9;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
    if ( v11(v9, &GUID_040fc393_aad6_453d_9a52_2ea63773235d, &v38) < 0
      || *(_QWORD *)(a2 + 24) != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 128LL))(v38) )
    {
      goto LABEL_41;
    }
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v38 + 136LL))(v38, v44);
    v13 = *(_QWORD *)(a2 + 32) - *v12;
    if ( !v13 )
      v13 = *(_QWORD *)(a2 + 40) - v12[1];
    if ( v13 || *(_DWORD *)(a2 + 8) != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v38 + 192LL))(v38) )
    {
LABEL_41:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
LABEL_42:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
      goto LABEL_40;
    }
    v14 = *(_QWORD *)(a2 + 16);
    if ( *(_WORD *)(v14 + 16) == *(_WORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 144LL))(v38) + 16) )
    {
      v15 = *(unsigned __int16 **)(a2 + 16);
      v16 = v15[8];
      v17 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 144LL))(v38);
      if ( !memcmp_0(v15, v17, v16 + 18) )
      {
        if ( *(_BYTE *)(a2 + 49) == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v38 + 168LL))(v38) )
        {
          if ( *(_BYTE *)(a2 + 48) == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v38 + 184LL))(v38) )
          {
            if ( *(_BYTE *)(a2 + 50) == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v38 + 264LL))(v38) )
            {
              v40 = 0;
              v18 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v38 + 440LL))(v38, a2 + 56, &v40);
              v19 = v18;
              if ( v18 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x6F,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                  (const char *)(unsigned int)v18);
                v28 = v38;
                if ( v38 )
                {
                  v38 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                }
                v29 = (__int64)v39;
                if ( v39 )
                {
                  v39 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                }
                if ( v8 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                if ( v6 )
                  LeaveCriticalSection(v6);
                return v19;
              }
              if ( v40 )
              {
                if ( a3[1] == a3[2] )
                {
                  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
                    a3,
                    a3[1],
                    (__int64)&v38);
                }
                else
                {
                  std::_Construct_in_place<Microsoft::WRL::ComPtr<IStreamGroupProxy>,Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
                    a3[1],
                    &v38);
                  a3[1] += 8LL;
                }
                v20 = v38;
                if ( v38 )
                {
                  v38 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                }
                v21 = (__int64)v39;
                if ( v39 )
                {
                  v39 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                }
              }
              else
              {
                v26 = v38;
                if ( v38 )
                {
                  v38 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
                }
                v27 = (__int64)v39;
                if ( v39 )
                {
                  v39 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
                }
              }
            }
            else
            {
              v34 = v38;
              if ( v38 )
              {
                v38 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
              }
              v35 = (__int64)v39;
              if ( v39 )
              {
                v39 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
              }
            }
          }
          else
          {
            v30 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
            }
            v31 = (__int64)v39;
            if ( v39 )
            {
              v39 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
            }
          }
        }
        else
        {
          v32 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          v33 = (__int64)v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
      }
      else
      {
        v24 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        v25 = (__int64)v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    else
    {
      v36 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      v37 = (__int64)v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_40:
    v5 = v42;
  }
  v22 = -2147023728;
  if ( *a3 != a3[1] )
    v22 = 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  return v22;
}
