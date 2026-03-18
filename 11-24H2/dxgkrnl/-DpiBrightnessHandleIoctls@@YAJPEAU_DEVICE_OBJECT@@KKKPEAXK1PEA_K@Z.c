/*
 * XREFs of ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x14031EF08
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x14042ACC0 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiBrightnessHandleIoctls(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int *a5,
        unsigned int a6,
        char *a7,
        unsigned __int64 *a8)
{
  unsigned int v10; // ebx
  __int64 (__fastcall **DeviceExtension)(struct _DEVICE_OBJECT *, _QWORD, PVOID *); // r14
  int v12; // r8d
  unsigned int v13; // esi
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rbx
  ULONG TimeIncrement; // eax
  __int64 (__fastcall *v19)(struct _DEVICE_OBJECT *, _QWORD, PVOID *); // rax
  unsigned int v20; // esi
  int *v21; // rbx
  int v22; // ecx
  int v23; // eax
  _DWORD *Pool2; // rax
  _DWORD *v25; // rdi
  PVOID *v26; // r8
  __int128 v27; // xmm0
  int v28; // eax
  __int64 (__fastcall *v29)(struct _DEVICE_OBJECT *, _QWORD, PVOID *); // rax
  int v30; // eax
  unsigned int v31; // ebx
  int v33; // r8d
  int v34; // r8d
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // r12
  char *v40; // rsi
  int v41; // eax
  __int64 v42; // rcx
  _WORD *v43; // rdi
  int v44; // eax
  __int64 (__fastcall *v45)(struct _DEVICE_OBJECT *, __int64, PVOID *); // rax
  int v46; // eax
  int v47; // esi
  int v48; // eax
  int v49; // eax
  unsigned int v50; // r8d
  _DWORD *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r9
  int v54; // esi
  int v55; // eax
  int v56; // eax
  unsigned int v57; // edx
  int v58; // eax
  int v59; // eax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  int *v61; // [rsp+38h] [rbp-71h]
  _OWORD v62[6]; // [rsp+40h] [rbp-69h] BYREF

  v10 = a2;
  LODWORD(P) = a2;
  DeviceExtension = (__int64 (__fastcall **)(struct _DEVICE_OBJECT *, _QWORD, PVOID *))a1->DeviceExtension;
  *a8 = 0LL;
  v61 = a5;
  if ( !*((_BYTE *)DeviceExtension + 1161) )
  {
    v12 = a3 - 2296832;
    if ( !v12 )
    {
      if ( a6 >= 8 )
      {
        LODWORD(P) = 0;
        *(_QWORD *)a7 = 0LL;
        *a8 = 8LL;
        if ( *((_WORD *)DeviceExtension + 2296) )
        {
          *(_DWORD *)a7 = 3;
          v56 = DeviceExtension[580](a1, a2, &P);
          v31 = v56;
          if ( v56 < 0 )
          {
            WdLogSingleEntry1(3LL, v56);
            WdLogGlobalForLineNumber = 1625;
            return v31;
          }
          v57 = (unsigned __int8)P & 2 | (unsigned __int8)P & 1 | *((_DWORD *)a7 + 1) & 0xFFFFFFF8;
          v58 = (unsigned __int8)P & 4;
        }
        else
        {
          if ( !*((_WORD *)DeviceExtension + 2332) )
          {
            if ( *((_WORD *)DeviceExtension + 2376) )
            {
              *(_DWORD *)a7 = 1;
              return 0;
            }
            else
            {
              v31 = -1073741637;
              WdLogSingleEntry1(3LL, -1073741637LL);
              WdLogGlobalForLineNumber = 1654;
            }
            return v31;
          }
          *(_DWORD *)a7 = 2;
          v59 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID *))DeviceExtension[590])(a1, &P);
          v31 = v59;
          if ( v59 < 0 )
          {
            WdLogSingleEntry1(3LL, v59);
            WdLogGlobalForLineNumber = 1641;
            return v31;
          }
          v57 = (unsigned __int8)P & 1 | *((_DWORD *)a7 + 1) & 0xFFFFFFFC;
          v58 = (unsigned __int8)P & 2;
        }
        *((_DWORD *)a7 + 1) = v58 | v57;
      }
      else
      {
        return (unsigned int)-1073741789;
      }
      return v31;
    }
    v13 = 4;
    v14 = v12 - 4;
    if ( v14 )
    {
      v15 = v14 - 4;
      if ( !v15 )
      {
        if ( a6 >= 0xC )
        {
          *a8 = 12LL;
          *(_QWORD *)a7 = 0LL;
          *((_DWORD *)a7 + 2) = 0;
          if ( *((_WORD *)DeviceExtension + 2296) )
          {
            *(_DWORD *)a7 = 3;
            v45 = DeviceExtension[579];
            P = 0LL;
            v46 = v45(a1, a2, &P);
            v31 = v46;
            if ( v46 < 0 )
            {
              WdLogSingleEntry1(3LL, v46);
              WdLogGlobalForLineNumber = 1716;
            }
            else
            {
              *(_QWORD *)(a7 + 4) = P;
            }
            return v31;
          }
          if ( *((_WORD *)DeviceExtension + 2332) )
          {
            v47 = 2;
          }
          else
          {
            if ( !*((_WORD *)DeviceExtension + 2376) )
            {
              v31 = -1073741637;
              WdLogSingleEntry1(3LL, 0LL);
              WdLogGlobalForLineNumber = 1695;
              return v31;
            }
            v47 = 1;
          }
          *(_DWORD *)a7 = v47;
          v48 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, char *))DeviceExtension[600])(a1, a7 + 4);
          v31 = v48;
          if ( v48 < 0 )
          {
            WdLogSingleEntry1(3LL, v48);
            WdLogGlobalForLineNumber = 1728;
          }
          return v31;
        }
        return (unsigned int)-1073741306;
      }
      v16 = v15 - 4;
      if ( !v16 )
      {
        memset(v62, 0, sizeof(v62));
        v62[0] = 0x6000000028uLL;
        memset(&v62[1], 0, 28);
        v17 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        LODWORD(v62[4]) = 1;
        *(_QWORD *)&v62[3] = v17 * TimeIncrement;
        v19 = DeviceExtension[504];
        if ( v19 )
          *((_QWORD *)&v62[3] + 1) = *(_QWORD *)((char *)v19 + 412);
        v20 = (unsigned int)P;
        DWORD1(v62[4]) = (_DWORD)P;
        if ( a4 < 0x20 )
        {
          v31 = -1073741306;
        }
        else
        {
          v21 = v61;
          DWORD2(v62[4]) = *v61;
          if ( DWORD2(v62[4]) == 1 || DWORD2(v62[4]) == 2 )
          {
            DWORD2(v62[5]) |= 1u;
            *(_QWORD *)((char *)&v62[4] + 12) = *((unsigned __int8 *)v61 + 4);
            if ( *((_WORD *)DeviceExtension + 2376) )
            {
              v37 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *))DeviceExtension[599])(a1);
              v31 = v37;
              if ( v37 < 0 )
              {
                WdLogSingleEntry1(3LL, v37);
                WdLogGlobalForLineNumber = 1834;
              }
            }
            else
            {
              v31 = -1073741637;
              WdLogSingleEntry1(3LL, -1073741637LL);
              WdLogGlobalForLineNumber = 1842;
            }
          }
          else if ( DWORD2(v62[4]) == 3 )
          {
            if ( *((_WORD *)DeviceExtension + 2296) )
            {
              HIDWORD(v62[4]) = v61[1];
              v22 = DWORD2(v62[5]) | 1;
              LODWORD(v62[5]) = v61[2];
              v23 = v61[3];
              DWORD2(v62[5]) |= 1u;
              if ( (v23 & 7) != 0 )
                DWORD2(v62[5]) = v22 & 0xFFFFFFFE;
              Pool2 = (_DWORD *)ExAllocatePool2(256LL, 32LL, 1953656900LL);
              v25 = Pool2;
              if ( Pool2 )
              {
                v26 = (PVOID *)Pool2;
                v27 = *(_OWORD *)(v61 + 3);
                *Pool2 = v61[1];
                Pool2[1] = v21[2];
                v28 = v21[7];
                *(_OWORD *)(v25 + 3) = v27;
                v25[7] = v28;
                v29 = DeviceExtension[578];
                v25[2] = 24;
                v30 = v29(a1, v20, v26);
                v31 = v30;
                if ( v30 < 0 )
                {
                  WdLogSingleEntry1(3LL, v30);
                  WdLogGlobalForLineNumber = 1806;
                }
                ExFreePoolWithTag(v25, 0x74727044u);
              }
              else
              {
                v31 = -1073741801;
                WdLogSingleEntry1(6LL, -1073741801LL);
                WdLogGlobalForLineNumber = 1790;
              }
            }
            else
            {
              v31 = -1073741637;
              WdLogSingleEntry1(3LL, -1073741637LL);
              WdLogGlobalForLineNumber = 1815;
            }
          }
          else
          {
            DWORD2(v62[5]) |= 1u;
            v31 = -1073741637;
            *(_QWORD *)((char *)&v62[4] + 12) = 0LL;
            WdLogSingleEntry1(3LL, SDWORD2(v62[4]));
            WdLogGlobalForLineNumber = 1855;
          }
        }
        DWORD1(v62[5]) = v31;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v62, 0x200000000LL);
        return v31;
      }
      v33 = v16 - 4;
      if ( !v33 )
      {
        if ( a4 >= 4 )
        {
          if ( *((_WORD *)DeviceExtension + 2332) )
          {
            LODWORD(P) = *a5 & 1;
            v44 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID *))DeviceExtension[591])(a1, &P);
            v31 = v44;
            if ( v44 < 0 )
            {
              WdLogSingleEntry1(3LL, v44);
              WdLogGlobalForLineNumber = 2005;
            }
          }
          else
          {
            v31 = -1073741637;
            WdLogSingleEntry1(3LL, -1073741637LL);
            WdLogGlobalForLineNumber = 2013;
          }
          return v31;
        }
        return (unsigned int)-1073741306;
      }
      v34 = v33 - 4;
      if ( !v34 )
      {
        if ( a4 >= 4 )
        {
          v35 = *a5;
          if ( (_DWORD)v35 )
          {
            switch ( (_DWORD)v35 )
            {
              case 1:
                v13 = 1;
                break;
              case 2:
                v13 = 2;
                break;
              case 3:
                v13 = 3;
                break;
              case 4:
                break;
              default:
                WdLogSingleEntry1(3LL, v35);
                WdLogGlobalForLineNumber = 2051;
                return (unsigned int)-1073741637;
            }
          }
          else
          {
            v13 = 0;
          }
          if ( *((_WORD *)DeviceExtension + 2296) )
          {
            v38 = DeviceExtension[582](a1, v10, (PVOID *)v13);
            v31 = v38;
            if ( v38 < 0 )
            {
              WdLogSingleEntry1(3LL, v38);
              WdLogGlobalForLineNumber = 2067;
            }
          }
          else if ( *((_WORD *)DeviceExtension + 2332) )
          {
            v36 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD))DeviceExtension[592])(a1, v13);
            v31 = v36;
            if ( v36 < 0 )
            {
              WdLogSingleEntry1(3LL, v36);
              WdLogGlobalForLineNumber = 2077;
            }
          }
          else
          {
            v31 = -1073741637;
            WdLogSingleEntry1(3LL, -1073741637LL);
            WdLogGlobalForLineNumber = 2085;
          }
          return v31;
        }
        return (unsigned int)-1073741306;
      }
      if ( v34 != 4 )
      {
        v31 = -1073741637;
        WdLogSingleEntry1(3LL, -1073741637LL);
        WdLogGlobalForLineNumber = 2170;
        return v31;
      }
      if ( a6 < 0x604 )
        return (unsigned int)-1073741306;
      *a8 = 1540LL;
      memset(a7, 0, 0x604uLL);
      if ( !*((_WORD *)DeviceExtension + 2332) )
      {
        v31 = -1073741637;
        WdLogSingleEntry1(3LL, -1073741637LL);
        WdLogGlobalForLineNumber = 2160;
        return v31;
      }
      v39 = 256LL;
      P = (PVOID)ExAllocatePool2(256LL, 1540LL, 1953656900LL);
      v40 = (char *)P;
      if ( !P )
      {
        v31 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 2127;
        return v31;
      }
      v41 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID))DeviceExtension[593])(a1, P);
      v31 = v41;
      if ( v41 < 0 )
      {
        WdLogSingleEntry1(3LL, v41);
        WdLogGlobalForLineNumber = 2150;
      }
      else
      {
        *(_WORD *)a7 = *(_WORD *)P;
        *((_WORD *)a7 + 1) = *((_WORD *)v40 + 1);
        v42 = v40 - a7;
        v43 = a7 + 516;
        do
        {
          *(v43 - 256) = *(_WORD *)((char *)v43 + v42 - 512);
          *v43 = *(_WORD *)((char *)v43 + v42);
          v43[256] = *(_WORD *)((char *)v43 + v42 + 512);
          ++v43;
          --v39;
        }
        while ( v39 );
        v40 = (char *)P;
      }
    }
    else
    {
      if ( a6 < 0xD0 )
        return (unsigned int)-1073741306;
      *a8 = 208LL;
      memset(a7, 0, 0xD0uLL);
      if ( !*((_WORD *)DeviceExtension + 2296) )
      {
        if ( *((_WORD *)DeviceExtension + 2332) )
        {
          v54 = 2;
        }
        else
        {
          if ( !*((_WORD *)DeviceExtension + 2376) )
          {
            v31 = -1073741637;
            WdLogSingleEntry1(3LL, -1073741637LL);
            WdLogGlobalForLineNumber = 1901;
            return v31;
          }
          v54 = 1;
        }
        *(_DWORD *)a7 = v54;
        v55 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, char *, char *))DeviceExtension[598])(
                a1,
                103LL,
                a7 + 4,
                a7 + 5);
        v31 = v55;
        if ( v55 < 0 )
        {
          WdLogSingleEntry1(3LL, v55);
          WdLogGlobalForLineNumber = 1971;
        }
        return v31;
      }
      *(_DWORD *)a7 = 3;
      v40 = (char *)ExAllocatePool2(256LL, 204LL, 1953656900LL);
      if ( !v40 )
      {
        v31 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1923;
        return v31;
      }
      v49 = DeviceExtension[581](a1, v10, (PVOID *)v40);
      v31 = v49;
      if ( v49 < 0 )
      {
        WdLogSingleEntry1(3LL, v49);
        WdLogGlobalForLineNumber = 1951;
      }
      else
      {
        v50 = *((_DWORD *)v40 + 1);
        *((_DWORD *)a7 + 1) = *(_DWORD *)v40;
        *((_DWORD *)a7 + 3) = *((_DWORD *)v40 + 2);
        *((_DWORD *)a7 + 2) = v50;
        if ( v50 )
        {
          v51 = a7 + 20;
          v52 = v40 + 12 - (a7 + 16);
          v53 = v50;
          do
          {
            *(v51 - 1) = *(_DWORD *)((char *)v51 + v52 - 4);
            *v51 = *(_DWORD *)((char *)v51 + v52);
            v51[1] = *(_DWORD *)((char *)v51 + v52 + 4);
            v51 += 3;
            --v53;
          }
          while ( v53 );
        }
      }
    }
    ExFreePoolWithTag(v40, 0x74727044u);
    return v31;
  }
  return 3221226166LL;
}
