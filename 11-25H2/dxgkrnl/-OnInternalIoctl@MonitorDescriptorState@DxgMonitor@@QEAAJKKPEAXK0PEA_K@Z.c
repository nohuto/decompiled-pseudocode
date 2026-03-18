/*
 * XREFs of ?OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1403D48D0
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140181CE4 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140184860 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInternalIoctl(
        DxgMonitor::MonitorDescriptorState *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5,
        char *a6,
        unsigned __int64 *a7)
{
  unsigned int v8; // r13d
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  __int16 v18; // si
  _WORD *v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rcx
  char *v30; // rdx
  unsigned int v31; // ecx
  char v32; // al
  unsigned __int64 v33; // rax
  __int128 v34; // xmm1
  unsigned __int64 *v35; // rax
  __int64 v36; // rcx
  signed int v37; // eax
  unsigned __int64 v38; // rbx
  __int64 v39; // rcx
  _WORD *v40; // r12
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  int v44; // eax
  int v45; // edi
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  _BYTE *v50; // rbx
  int v51; // eax
  _WORD *v52; // rbx
  void *v53; // rbx
  int v54; // eax
  _WORD *v55; // rbx
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  signed int v59; // eax
  unsigned __int16 *v60; // rdx
  int v61; // eax
  _BYTE v62[4]; // [rsp+30h] [rbp-91h] BYREF
  unsigned __int16 v63; // [rsp+34h] [rbp-8Dh] BYREF
  int v64; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 *v65; // [rsp+40h] [rbp-81h]
  unsigned __int64 *v66; // [rsp+48h] [rbp-79h]
  int v67; // [rsp+50h] [rbp-71h] BYREF
  __int16 v68; // [rsp+54h] [rbp-6Dh]
  unsigned int v69; // [rsp+58h] [rbp-69h] BYREF
  int v70; // [rsp+5Ch] [rbp-65h] BYREF
  void *v71; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v72[2]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v73[2]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD v74[2]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v75[2]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v76; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v77; // [rsp+B8h] [rbp-9h]

  v8 = a3;
  v66 = (unsigned __int64 *)a6;
  v65 = a7;
  v10 = -1073741637;
  v11 = (unsigned int)a2;
  v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v11;
  *(_QWORD *)(v12 + 32) = this;
  WdLogGlobalForLineNumber = 835;
  v13 = v11 - 2302979;
  if ( !v13 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 840;
    return v10;
  }
  v14 = v13 - 12;
  if ( !v14 )
  {
    v36 = *((_QWORD *)this + 20);
    if ( !v36 )
      return (unsigned int)-1071841279;
    if ( v8 < 0x10 || a5 < 0x10 )
      return (unsigned int)-1073741789;
    v64 = 0;
    v37 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, _QWORD))(*(_QWORD *)v36 + 192LL))(v36, &v64, 0LL, 0LL);
    v10 = v37;
    if ( (int)(v37 + 0x80000000) >= 0 && v37 != -1073741789 )
    {
      WdLogSingleEntry1(2LL, v37);
      WdLogGlobalForLineNumber = 880;
      return v10;
    }
    if ( !v64 )
      return (unsigned int)-1071841279;
    v38 = 56LL * (unsigned int)(v64 - 1) + 60;
    if ( *a4 >= v38 )
    {
      v39 = *((_QWORD *)this + 20);
      v40 = (_WORD *)a4[1];
      v70 = 0;
      v41 = (*(__int64 (__fastcall **)(__int64, int *, int *, _WORD *))(*(_QWORD *)v39 + 192LL))(
              v39,
              &v64,
              &v70,
              v40 + 2);
      v10 = v41;
      if ( v41 < 0 )
      {
        WdLogSingleEntry1(2LL, v41);
        WdLogGlobalForLineNumber = 922;
        return v10;
      }
      *v40 = v64;
      v40[1] = v70;
      goto LABEL_103;
    }
    goto LABEL_102;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    v58 = *((_QWORD *)this + 20);
    if ( !v58 )
      return (unsigned int)-1071841279;
    if ( v8 < 0x10 || a5 < 0x10 )
      return (unsigned int)-1073741789;
    v63 = 0;
    v59 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *, _QWORD))(*(_QWORD *)v58 + 200LL))(v58, &v63, 0LL);
    v10 = v59;
    if ( v59 == -1073741275 )
      return (unsigned int)-1071841279;
    if ( (int)(v59 + 0x80000000) >= 0 && v59 != -1073741789 )
    {
      WdLogSingleEntry1(2LL, v59);
      WdLogGlobalForLineNumber = 997;
      return v10;
    }
    v38 = 52LL * v63 + 4;
    if ( *a4 >= v38 )
    {
      v60 = (unsigned __int16 *)a4[1];
      *v60 = v63;
      v61 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, unsigned __int16 *))(**((_QWORD **)this + 20) + 200LL))(
              *((_QWORD *)this + 20),
              v60,
              v60 + 2);
      v10 = v61;
      if ( v61 < 0 )
      {
        WdLogSingleEntry1(2LL, v61);
        WdLogGlobalForLineNumber = 1026;
        return v10;
      }
      goto LABEL_103;
    }
LABEL_102:
    v10 = -2147483643;
LABEL_103:
    *v66 = v38;
    goto LABEL_104;
  }
  v16 = v15 - 4;
  if ( v16 )
  {
    v17 = v16 - 4;
    if ( v17 )
    {
      v25 = v17 - 4;
      if ( v25 )
      {
        v26 = v25 - 4;
        if ( v26 )
        {
          v27 = v26 - 4;
          if ( v27 )
          {
            if ( v27 != 4 )
              return v10;
            v48 = *((_QWORD *)this + 20);
            if ( v48 )
            {
              if ( v8 >= 0x10 && a5 >= 0x10 )
              {
                v62[0] = 0;
                v49 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v48 + 152LL))(v48, v62);
                v10 = v49;
                if ( v49 < 0 )
                {
                  if ( v49 == -1073741275 )
                    return v10;
                  WdLogSingleEntry1(3LL, v49);
                  WdLogGlobalForLineNumber = 1521;
                  goto LABEL_14;
                }
                if ( *a4 )
                {
                  v50 = (_BYTE *)a4[1];
                  memset(v50, 0, *a4);
                  *v50 = v62[0];
                }
                else
                {
                  v10 = -2147483643;
                }
                *v66 = 1LL;
                goto LABEL_104;
              }
              return (unsigned int)-1073741789;
            }
          }
          else
          {
            v28 = *((_QWORD *)this + 20);
            if ( v28 )
            {
              if ( v8 >= 0x10 && a5 >= 0x10 )
              {
                v67 = 0;
                v68 = 0;
                v51 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 144LL))(v28, &v67);
                v10 = v51;
                if ( v51 < 0 )
                {
                  if ( v51 == -1073741275 )
                    return v10;
                  WdLogSingleEntry1(3LL, v51);
                  WdLogGlobalForLineNumber = 1450;
                  goto LABEL_14;
                }
                if ( *a4 < 6 )
                {
                  v10 = -2147483643;
                }
                else
                {
                  v52 = (_WORD *)a4[1];
                  memset(v52, 0, *a4);
                  *(_DWORD *)v52 = v67;
                  v52[2] = v68;
                }
                *v66 = 6LL;
                goto LABEL_104;
              }
              return (unsigned int)-1073741789;
            }
          }
        }
        else if ( *((_QWORD *)this + 20) )
        {
          if ( v8 >= 0x10 && a5 >= 0x10 )
          {
            if ( *a4 < 0xB )
            {
              v10 = -2147483643;
            }
            else
            {
              v53 = (void *)a4[1];
              memset(v53, 0, *a4);
              v54 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 20) + 136LL))(
                      *((_QWORD *)this + 20),
                      v53);
              v10 = v54;
              if ( v54 < 0 )
              {
                WdLogSingleEntry1(3LL, v54);
                WdLogGlobalForLineNumber = 1393;
                MonitorLogBadEDID(v10);
              }
            }
            *v66 = 11LL;
            goto LABEL_104;
          }
          return (unsigned int)-1073741789;
        }
      }
      else if ( *((_QWORD *)this + 20) )
      {
        if ( v8 >= 0x10 && a5 >= 0x10 )
        {
          if ( *a4 < 0x10 )
          {
            v10 = -2147483643;
          }
          else
          {
            v55 = (_WORD *)a4[1];
            memset(v55, 0, *a4);
            v56 = *((_QWORD *)this + 20);
            v76 = 0LL;
            v77 = 0LL;
            v57 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v56 + 120LL))(v56, &v76);
            v10 = v57;
            if ( v57 >= 0 )
            {
              *v55 = (unsigned __int16)v76 >> 2;
              v55[1] = WORD2(v76) >> 2;
              v55[4] = WORD4(v76) >> 2;
              v55[5] = WORD6(v76) >> 2;
              v55[2] = (unsigned __int16)v77 >> 2;
              v55[3] = WORD2(v77) >> 2;
              v55[6] = WORD4(v77) >> 2;
              v55[7] = WORD6(v77) >> 2;
            }
            else
            {
              WdLogSingleEntry1(3LL, v57);
              WdLogGlobalForLineNumber = 1321;
              MonitorLogBadEDID(v10);
            }
          }
          *v66 = 16LL;
          goto LABEL_104;
        }
        return (unsigned int)-1073741789;
      }
    }
    else
    {
      v18 = 0;
      if ( *((_QWORD *)this + 20) )
      {
        if ( v8 >= 0x10 && a5 >= 0x10 )
        {
          if ( *a4 < 0x82 )
          {
            v10 = -2147483643;
          }
          else
          {
            v19 = (_WORD *)a4[1];
            memset(v19, 0, *a4);
            v20 = *((_QWORD *)this + 20);
            v72[0] = 0x200000LL;
            v72[1] = v19;
            v21 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 72LL))(v20, v72);
            v10 = v21;
            if ( v21 < 0 )
            {
              WdLogSingleEntry1(3LL, v21);
              WdLogGlobalForLineNumber = 1167;
              goto LABEL_14;
            }
            v22 = *((_QWORD *)this + 20);
            v73[1] = v19 + 16;
            v73[0] = 0x200000LL;
            v23 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 80LL))(v22, v73);
            v10 = v23;
            if ( v23 == -1073741275 )
            {
              WdLogSingleEntry0(7LL);
              WdLogGlobalForLineNumber = 1186;
            }
            else if ( v23 < 0 )
            {
              WdLogSingleEntry1(3LL, v23);
              WdLogGlobalForLineNumber = 1192;
LABEL_14:
              MonitorLogBadEDID(v10);
              return v10;
            }
            v42 = *((_QWORD *)this + 20);
            v74[1] = v19 + 32;
            v74[0] = 0x200000LL;
            v43 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v42 + 64LL))(v42, v74);
            v10 = v43;
            if ( v43 < 0 )
            {
              WdLogSingleEntry1(3LL, v43);
              WdLogGlobalForLineNumber = 1206;
              goto LABEL_14;
            }
            v44 = (*(__int64 (__fastcall **)(_QWORD, _WORD *, _WORD *))(**((_QWORD **)this + 20) + 88LL))(
                    *((_QWORD *)this + 20),
                    v19 + 48,
                    v19 + 49);
            v45 = v44;
            if ( v44 < 0 )
            {
              WdLogSingleEntry1(3LL, v44);
              WdLogGlobalForLineNumber = 1220;
              MonitorLogBadEDID(v45);
            }
            v46 = *((_QWORD *)this + 20);
            v75[1] = v19 + 51;
            v75[0] = 1835008LL;
            v47 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v46 + 104LL))(v46, v75);
            v10 = v47;
            if ( v47 == -1073741275 )
            {
              WdLogSingleEntry0(7LL);
              WdLogGlobalForLineNumber = 1243;
              v10 = 0;
            }
            else
            {
              if ( v47 < 0 )
              {
                WdLogSingleEntry1(3LL, v47);
                WdLogGlobalForLineNumber = 1251;
                MonitorLogBadEDID(v10);
                v19[50] = 0;
                return v10;
              }
              v18 = 13;
            }
            v19[50] = v18;
          }
          *v66 = 130LL;
LABEL_104:
          *v65 = 16LL;
          return v10;
        }
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)-1071841279;
  }
  v29 = *((_QWORD *)this + 16);
  if ( !v29 )
    return (unsigned int)-1071841279;
  if ( v8 < 0x88 || a5 < 0x88 )
    return (unsigned int)-1073741789;
  v69 = 0;
  (*(void (__fastcall **)(__int64, void **, unsigned int *))(*(_QWORD *)v29 + 232LL))(v29, &v71, &v69);
  v30 = (char *)v71;
  if ( v71 && v69 >= 0x80 && (v31 = *(unsigned __int8 *)a4, v31 < v69 >> 7) )
  {
    *a6 = v31;
    v10 = 0;
    v32 = *(_BYTE *)a4;
    *((_DWORD *)a6 + 33) = 2;
    a6[1] = v32 != 0 ? -1 : 1;
    v33 = (unsigned __int64)*(unsigned __int8 *)a4 << 7;
    *(_OWORD *)(a6 + 2) = *(_OWORD *)&v30[v33];
    *(_OWORD *)(a6 + 18) = *(_OWORD *)&v30[v33 + 16];
    *(_OWORD *)(a6 + 34) = *(_OWORD *)&v30[v33 + 32];
    *(_OWORD *)(a6 + 50) = *(_OWORD *)&v30[v33 + 48];
    *(_OWORD *)(a6 + 66) = *(_OWORD *)&v30[v33 + 64];
    *(_OWORD *)(a6 + 82) = *(_OWORD *)&v30[v33 + 80];
    *(_OWORD *)(a6 + 98) = *(_OWORD *)&v30[v33 + 96];
    v34 = *(_OWORD *)&v30[v33 + 112];
    v35 = v65;
    v71 = 0LL;
    *(_OWORD *)(a6 + 114) = v34;
    *v35 = 136LL;
    if ( v30 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v30);
  }
  else
  {
    v10 = -1071841279;
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v71);
  }
  return v10;
}
