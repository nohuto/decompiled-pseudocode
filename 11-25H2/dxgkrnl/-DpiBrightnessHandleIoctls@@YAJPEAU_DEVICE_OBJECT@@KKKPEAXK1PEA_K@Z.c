/*
 * XREFs of ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x140376448
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x14042A190 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
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
  __int64 v19; // r9
  __int64 (__fastcall *v20)(struct _DEVICE_OBJECT *, _QWORD, PVOID *); // rax
  unsigned int v21; // esi
  int *v22; // rbx
  int v23; // ecx
  int v24; // eax
  _DWORD *Pool2; // rax
  _DWORD *v26; // rdi
  PVOID *v27; // r8
  __int128 v28; // xmm0
  int v29; // eax
  __int64 (__fastcall *v30)(struct _DEVICE_OBJECT *, _QWORD, PVOID *); // rax
  int v31; // eax
  unsigned int v32; // ebx
  int v34; // r8d
  int v35; // r8d
  __int64 v36; // rdx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // r9
  __int64 v41; // r12
  char *v42; // rsi
  int v43; // eax
  __int64 v44; // rcx
  _WORD *v45; // rdi
  int v46; // eax
  __int64 (__fastcall *v47)(struct _DEVICE_OBJECT *, __int64, PVOID *); // rax
  int v48; // eax
  int v49; // esi
  int v50; // eax
  __int64 v51; // r9
  int v52; // eax
  unsigned int v53; // r8d
  _DWORD *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r9
  int v57; // esi
  int v58; // eax
  int v59; // eax
  unsigned int v60; // edx
  int v61; // eax
  int v62; // eax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  int *v64; // [rsp+38h] [rbp-71h]
  _OWORD v65[6]; // [rsp+40h] [rbp-69h] BYREF

  v10 = a2;
  LODWORD(P) = a2;
  DeviceExtension = (__int64 (__fastcall **)(struct _DEVICE_OBJECT *, _QWORD, PVOID *))a1->DeviceExtension;
  *a8 = 0LL;
  v64 = a5;
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
          v59 = DeviceExtension[580](a1, a2, &P);
          v32 = v59;
          if ( v59 < 0 )
          {
            WdLogSingleEntry1(3LL, v59);
            WdLogGlobalForLineNumber = 1610;
            return v32;
          }
          v60 = (unsigned __int8)P & 2 | (unsigned __int8)P & 1 | *((_DWORD *)a7 + 1) & 0xFFFFFFF8;
          v61 = (unsigned __int8)P & 4;
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
              v32 = -1073741637;
              WdLogSingleEntry1(3LL, -1073741637LL);
              WdLogGlobalForLineNumber = 1639;
            }
            return v32;
          }
          *(_DWORD *)a7 = 2;
          v62 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID *))DeviceExtension[590])(a1, &P);
          v32 = v62;
          if ( v62 < 0 )
          {
            WdLogSingleEntry1(3LL, v62);
            WdLogGlobalForLineNumber = 1626;
            return v32;
          }
          v60 = (unsigned __int8)P & 1 | *((_DWORD *)a7 + 1) & 0xFFFFFFFC;
          v61 = (unsigned __int8)P & 2;
        }
        *((_DWORD *)a7 + 1) = v61 | v60;
      }
      else
      {
        return (unsigned int)-1073741789;
      }
      return v32;
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
            v47 = DeviceExtension[579];
            P = 0LL;
            v48 = v47(a1, a2, &P);
            v32 = v48;
            if ( v48 < 0 )
            {
              WdLogSingleEntry1(3LL, v48);
              WdLogGlobalForLineNumber = 1701;
            }
            else
            {
              *(_QWORD *)(a7 + 4) = P;
            }
            return v32;
          }
          if ( *((_WORD *)DeviceExtension + 2332) )
          {
            v49 = 2;
          }
          else
          {
            if ( !*((_WORD *)DeviceExtension + 2376) )
            {
              v32 = -1073741637;
              WdLogSingleEntry1(3LL, 0LL);
              WdLogGlobalForLineNumber = 1680;
              return v32;
            }
            v49 = 1;
          }
          *(_DWORD *)a7 = v49;
          v50 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, char *))DeviceExtension[600])(a1, a7 + 4);
          v32 = v50;
          if ( v50 < 0 )
          {
            WdLogSingleEntry1(3LL, v50);
            WdLogGlobalForLineNumber = 1713;
          }
          return v32;
        }
        return (unsigned int)-1073741306;
      }
      v16 = v15 - 4;
      if ( !v16 )
      {
        memset(v65, 0, sizeof(v65));
        v65[0] = 0x6000000028uLL;
        memset(&v65[1], 0, 28);
        v17 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        LODWORD(v65[4]) = 1;
        *(_QWORD *)&v65[3] = v17 * TimeIncrement;
        v20 = DeviceExtension[504];
        if ( v20 )
          *((_QWORD *)&v65[3] + 1) = *(_QWORD *)((char *)v20 + 412);
        v21 = (unsigned int)P;
        DWORD1(v65[4]) = (_DWORD)P;
        if ( a4 < 0x20 )
        {
          v32 = -1073741306;
        }
        else
        {
          v22 = v64;
          DWORD2(v65[4]) = *v64;
          if ( DWORD2(v65[4]) == 1 || DWORD2(v65[4]) == 2 )
          {
            DWORD2(v65[5]) |= 1u;
            *(_QWORD *)((char *)&v65[4] + 12) = *((unsigned __int8 *)v64 + 4);
            if ( *((_WORD *)DeviceExtension + 2376) )
            {
              v38 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *))DeviceExtension[599])(a1);
              v32 = v38;
              if ( v38 < 0 )
              {
                WdLogSingleEntry1(3LL, v38);
                WdLogGlobalForLineNumber = 1819;
              }
            }
            else
            {
              v32 = -1073741637;
              WdLogSingleEntry1(3LL, -1073741637LL);
              WdLogGlobalForLineNumber = 1827;
            }
          }
          else if ( DWORD2(v65[4]) == 3 )
          {
            if ( *((_WORD *)DeviceExtension + 2296) )
            {
              HIDWORD(v65[4]) = v64[1];
              v23 = DWORD2(v65[5]) | 1;
              LODWORD(v65[5]) = v64[2];
              v24 = v64[3];
              DWORD2(v65[5]) |= 1u;
              if ( (v24 & 7) != 0 )
                DWORD2(v65[5]) = v23 & 0xFFFFFFFE;
              Pool2 = (_DWORD *)ExAllocatePool2(256LL, 32LL, 1953656900LL, v19);
              v26 = Pool2;
              if ( Pool2 )
              {
                v27 = (PVOID *)Pool2;
                v28 = *(_OWORD *)(v64 + 3);
                *Pool2 = v64[1];
                Pool2[1] = v22[2];
                v29 = v22[7];
                *(_OWORD *)(v26 + 3) = v28;
                v26[7] = v29;
                v30 = DeviceExtension[578];
                v26[2] = 24;
                v31 = v30(a1, v21, v27);
                v32 = v31;
                if ( v31 < 0 )
                {
                  WdLogSingleEntry1(3LL, v31);
                  WdLogGlobalForLineNumber = 1791;
                }
                ExFreePoolWithTag(v26, 0x74727044u);
              }
              else
              {
                v32 = -1073741801;
                WdLogSingleEntry1(6LL, -1073741801LL);
                WdLogGlobalForLineNumber = 1775;
              }
            }
            else
            {
              v32 = -1073741637;
              WdLogSingleEntry1(3LL, -1073741637LL);
              WdLogGlobalForLineNumber = 1800;
            }
          }
          else
          {
            DWORD2(v65[5]) |= 1u;
            v32 = -1073741637;
            *(_QWORD *)((char *)&v65[4] + 12) = 0LL;
            WdLogSingleEntry1(3LL, SDWORD2(v65[4]));
            WdLogGlobalForLineNumber = 1840;
          }
        }
        DWORD1(v65[5]) = v32;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v65, 0x200000000LL);
        return v32;
      }
      v34 = v16 - 4;
      if ( !v34 )
      {
        if ( a4 >= 4 )
        {
          if ( *((_WORD *)DeviceExtension + 2332) )
          {
            LODWORD(P) = *a5 & 1;
            v46 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID *))DeviceExtension[591])(a1, &P);
            v32 = v46;
            if ( v46 < 0 )
            {
              WdLogSingleEntry1(3LL, v46);
              WdLogGlobalForLineNumber = 1990;
            }
          }
          else
          {
            v32 = -1073741637;
            WdLogSingleEntry1(3LL, -1073741637LL);
            WdLogGlobalForLineNumber = 1998;
          }
          return v32;
        }
        return (unsigned int)-1073741306;
      }
      v35 = v34 - 4;
      if ( !v35 )
      {
        if ( a4 >= 4 )
        {
          v36 = *a5;
          if ( (_DWORD)v36 )
          {
            switch ( (_DWORD)v36 )
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
                WdLogSingleEntry1(3LL, v36);
                WdLogGlobalForLineNumber = 2036;
                return (unsigned int)-1073741637;
            }
          }
          else
          {
            v13 = 0;
          }
          if ( *((_WORD *)DeviceExtension + 2296) )
          {
            v39 = DeviceExtension[582](a1, v10, (PVOID *)v13);
            v32 = v39;
            if ( v39 < 0 )
            {
              WdLogSingleEntry1(3LL, v39);
              WdLogGlobalForLineNumber = 2052;
            }
          }
          else if ( *((_WORD *)DeviceExtension + 2332) )
          {
            v37 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD))DeviceExtension[592])(a1, v13);
            v32 = v37;
            if ( v37 < 0 )
            {
              WdLogSingleEntry1(3LL, v37);
              WdLogGlobalForLineNumber = 2062;
            }
          }
          else
          {
            v32 = -1073741637;
            WdLogSingleEntry1(3LL, -1073741637LL);
            WdLogGlobalForLineNumber = 2070;
          }
          return v32;
        }
        return (unsigned int)-1073741306;
      }
      if ( v35 != 4 )
      {
        v32 = -1073741637;
        WdLogSingleEntry1(3LL, -1073741637LL);
        WdLogGlobalForLineNumber = 2155;
        return v32;
      }
      if ( a6 < 0x604 )
        return (unsigned int)-1073741306;
      *a8 = 1540LL;
      memset(a7, 0, 0x604uLL);
      if ( !*((_WORD *)DeviceExtension + 2332) )
      {
        v32 = -1073741637;
        WdLogSingleEntry1(3LL, -1073741637LL);
        WdLogGlobalForLineNumber = 2145;
        return v32;
      }
      v41 = 256LL;
      P = (PVOID)ExAllocatePool2(256LL, 1540LL, 1953656900LL, v40);
      v42 = (char *)P;
      if ( !P )
      {
        v32 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 2112;
        return v32;
      }
      v43 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID))DeviceExtension[593])(a1, P);
      v32 = v43;
      if ( v43 < 0 )
      {
        WdLogSingleEntry1(3LL, v43);
        WdLogGlobalForLineNumber = 2135;
      }
      else
      {
        *(_WORD *)a7 = *(_WORD *)P;
        *((_WORD *)a7 + 1) = *((_WORD *)v42 + 1);
        v44 = v42 - a7;
        v45 = a7 + 516;
        do
        {
          *(v45 - 256) = *(_WORD *)((char *)v45 + v44 - 512);
          *v45 = *(_WORD *)((char *)v45 + v44);
          v45[256] = *(_WORD *)((char *)v45 + v44 + 512);
          ++v45;
          --v41;
        }
        while ( v41 );
        v42 = (char *)P;
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
          v57 = 2;
        }
        else
        {
          if ( !*((_WORD *)DeviceExtension + 2376) )
          {
            v32 = -1073741637;
            WdLogSingleEntry1(3LL, -1073741637LL);
            WdLogGlobalForLineNumber = 1886;
            return v32;
          }
          v57 = 1;
        }
        *(_DWORD *)a7 = v57;
        v58 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, char *, char *))DeviceExtension[598])(
                a1,
                103LL,
                a7 + 4,
                a7 + 5);
        v32 = v58;
        if ( v58 < 0 )
        {
          WdLogSingleEntry1(3LL, v58);
          WdLogGlobalForLineNumber = 1956;
        }
        return v32;
      }
      *(_DWORD *)a7 = 3;
      v42 = (char *)ExAllocatePool2(256LL, 204LL, 1953656900LL, v51);
      if ( !v42 )
      {
        v32 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1908;
        return v32;
      }
      v52 = DeviceExtension[581](a1, v10, (PVOID *)v42);
      v32 = v52;
      if ( v52 < 0 )
      {
        WdLogSingleEntry1(3LL, v52);
        WdLogGlobalForLineNumber = 1936;
      }
      else
      {
        v53 = *((_DWORD *)v42 + 1);
        *((_DWORD *)a7 + 1) = *(_DWORD *)v42;
        *((_DWORD *)a7 + 3) = *((_DWORD *)v42 + 2);
        *((_DWORD *)a7 + 2) = v53;
        if ( v53 )
        {
          v54 = a7 + 20;
          v55 = v42 + 12 - (a7 + 16);
          v56 = v53;
          do
          {
            *(v54 - 1) = *(_DWORD *)((char *)v54 + v55 - 4);
            *v54 = *(_DWORD *)((char *)v54 + v55);
            v54[1] = *(_DWORD *)((char *)v54 + v55 + 4);
            v54 += 3;
            --v56;
          }
          while ( v56 );
        }
      }
    }
    ExFreePoolWithTag(v42, 0x74727044u);
    return v32;
  }
  return 3221226166LL;
}
