/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x1800392E0
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180052AB0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHorizontalStripHelper(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r15
  unsigned int v9; // esi
  __int64 v10; // r12
  __int64 v11; // rdi
  int v12; // r13d
  int v13; // r14d
  void *v14; // rax
  LONG top; // ecx
  unsigned int v16; // edx
  unsigned int v17; // edx
  int v18; // r13d
  int v19; // r8d
  __int64 v20; // rbx
  int *v21; // r15
  _OWORD *v22; // r14
  unsigned int v23; // esi
  __int64 v24; // rcx
  CBaseObject *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  CBaseObject *v30; // rcx
  int v31; // eax
  int v32; // eax
  __int64 result; // rax
  int v34; // [rsp+30h] [rbp-B9h]
  unsigned int v36; // [rsp+38h] [rbp-B1h]
  __int64 v37; // [rsp+40h] [rbp-A9h]
  unsigned int v38; // [rsp+48h] [rbp-A1h]
  int v40; // [rsp+50h] [rbp-99h]
  __int64 v41; // [rsp+68h] [rbp-81h]
  struct tagRECT rc; // [rsp+80h] [rbp-69h] BYREF
  struct tagRECT pRect; // [rsp+90h] [rbp-59h] BYREF
  _DWORD v45[4]; // [rsp+A0h] [rbp-49h] BYREF
  _DWORD v46[6]; // [rsp+B0h] [rbp-39h] BYREF
  int v47; // [rsp+C8h] [rbp-21h]
  LONG bottom; // [rsp+CCh] [rbp-1Dh]
  int v49; // [rsp+D0h] [rbp-19h]
  LONG v50; // [rsp+D4h] [rbp-15h]
  LONG right; // [rsp+D8h] [rbp-11h]
  LONG v52; // [rsp+DCh] [rbp-Dh]

  v8 = a7;
  v9 = 0;
  v10 = a8;
  v11 = 0LL;
  v37 = 0LL;
  v12 = a4;
  v13 = a3;
  v14 = a1;
  v40 = a2;
  v36 = 0;
  while ( 1 )
  {
    if ( (unsigned __int16)GetThemeRect(v14, a2, 0, 8002, &pRect) == 1168 )
    {
      result = 0LL;
    }
    else
    {
      top = pRect.top;
      v16 = pRect.bottom - pRect.top;
      if ( pRect.bottom - pRect.top < 0 )
        v16 = 0;
      v17 = v16 >> 1;
      v45[0] = v12;
      v18 = 0;
      v19 = 0;
      v45[1] = a5;
      v34 = 0;
      v38 = v17;
      v45[2] = a6;
      while ( 2 )
      {
        rc.left = pRect.left;
        v20 = v8;
        if ( v18 )
          v20 = v10;
        rc.right = pRect.right;
        rc.top = v19 + top;
        v41 = v20;
        rc.bottom = v17 + v19 + top;
        InflateRect(&rc, -1, -1);
        v21 = v45;
        v46[0] = rc.left;
        v46[1] = rc.top;
        v46[2] = rc.left + v13;
        v46[4] = rc.left + v13;
        v46[3] = rc.bottom;
        v47 = rc.right - v13;
        v22 = v46;
        v49 = v47;
        v23 = 0;
        v46[5] = rc.top;
        bottom = rc.bottom;
        v50 = rc.top;
        right = rc.right;
        v52 = rc.bottom;
        do
        {
          v24 = v11 + 2LL * *v21;
          v25 = CTopLevelWindow::s_pbsNonClientAtlas;
          v26 = v20 + 8 * v24;
          v27 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  104LL);
          v28 = v27;
          if ( !v27 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xABu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9D0, 1u, -2147024882, 0x57Cu, 0LL);
            return 2147942414LL;
          }
          *(_DWORD *)(v27 + 8) = 1;
          *(_QWORD *)v27 = &CBitmapSource::`vftable';
          *(_QWORD *)(v27 + 16) = 0LL;
          *(_QWORD *)(v27 + 96) = 0LL;
          *(_DWORD *)(v27 + 80) = 0x80000000;
          *(_DWORD *)(v27 + 88) = 0x80000000;
          *(_DWORD *)(v27 + 84) = 0x80000000;
          *(_DWORD *)(v27 + 92) = 0x80000000;
          v29 = *((_QWORD *)v25 + 2);
          v30 = *(CBaseObject **)(v28 + 16);
          *(_QWORD *)(v28 + 16) = v29;
          if ( v29 )
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
          if ( v30 )
            CBaseObject::Release(v30);
          *(_OWORD *)(v28 + 80) = *v22;
          v31 = *(_DWORD *)(v28 + 88) - *(_DWORD *)(v28 + 80);
          if ( v31 < 0 )
            v31 = 0;
          *(_DWORD *)(v28 + 24) = v31;
          v32 = *(_DWORD *)(v28 + 92) - *(_DWORD *)(v28 + 84);
          if ( v32 < 0 )
            v32 = 0;
          v11 = v37;
          ++v23;
          *(_DWORD *)(v28 + 28) = v32;
          ++v22;
          result = 0LL;
          *(_QWORD *)(v26 + 1480) = v28;
          v20 = v41;
          ++v21;
        }
        while ( v23 < 3 );
        ++v18;
        v17 = v38;
        v19 = v38 + v34;
        v13 = a3;
        v8 = a7;
        v10 = a8;
        v34 += v38;
        if ( v18 < 2 )
        {
          top = pRect.top;
          continue;
        }
        break;
      }
      v9 = v36;
      v12 = a4;
    }
    ++v9;
    ++v11;
    v36 = v9;
    v37 = v11;
    if ( v9 >= 2 )
      return result;
    v14 = a1;
    a2 = v40;
  }
}
