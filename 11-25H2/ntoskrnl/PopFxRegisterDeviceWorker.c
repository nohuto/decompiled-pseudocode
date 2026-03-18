/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x140742B20
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x140741500 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x140742880 (PopFxRegisterDevice.c)
 * Callees:
 *     PopFxActivateComponent @ 0x140203D5C (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     IoAllocateIrp @ 0x14035B6A0 (IoAllocateIrp.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PopPlRegisterComponent @ 0x1404A0EC4 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1404AC8BC (PopPlRegisterDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404BB084 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IoInitializeRemoveLockEx @ 0x1404BE530 (IoInitializeRemoveLockEx.c)
 *     PopFxRegisterDeviceWithPep @ 0x1404C5020 (PopFxRegisterDeviceWithPep.c)
 *     PopFxCreateDeviceCommon @ 0x1405CC4D4 (PopFxCreateDeviceCommon.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1405CD474 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxVerifyDependencies @ 0x1407434E4 (PopFxVerifyDependencies.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        _QWORD *a9)
{
  __int64 v9; // r14
  int v10; // ebx
  __int64 *v13; // rsi
  int v14; // ebx
  __int64 Pool2; // rax
  unsigned int v16; // r9d
  _DWORD *v17; // r15
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  unsigned int i; // r8d
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // r11
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r13
  int AcpiDeviceByUniqueId; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  char *v34; // rdi
  int DeviceCommon; // eax
  char *v36; // r15
  __int64 v37; // rax
  _QWORD *v38; // rsi
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int64 v41; // r9
  char *v42; // r9
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  _OWORD *v46; // rbx
  __int64 v47; // r8
  unsigned int v48; // edx
  __int128 *v49; // r12
  __int128 v50; // xmm0
  char *v51; // r9
  unsigned int v52; // r11d
  int v53; // eax
  int v54; // eax
  char *v55; // r8
  unsigned int v56; // edx
  __int64 v57; // rcx
  _DWORD *v58; // r10
  char *v59; // r8
  __int64 v60; // r8
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r10
  char *v65; // rcx
  _QWORD *v66; // rcx
  unsigned int v67; // ebx
  __int64 v68; // r12
  unsigned int v69; // r9d
  __int64 v70; // r10
  __int64 v71; // r8
  __int64 v72; // rcx
  PIRP Irp; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rbx
  _DWORD *v77; // rdi
  int v79; // [rsp+38h] [rbp-99h]
  unsigned int v80; // [rsp+38h] [rbp-99h]
  PVOID P; // [rsp+40h] [rbp-91h] BYREF
  _QWORD *v82; // [rsp+48h] [rbp-89h]
  __int64 v83; // [rsp+50h] [rbp-81h]
  volatile signed __int32 *v84; // [rsp+58h] [rbp-79h] BYREF
  char *v85; // [rsp+60h] [rbp-71h]
  _DWORD *v86; // [rsp+68h] [rbp-69h]
  __int64 v87; // [rsp+70h] [rbp-61h]
  int v88; // [rsp+78h] [rbp-59h]
  char *v89; // [rsp+80h] [rbp-51h]
  char *v90; // [rsp+88h] [rbp-49h]
  __int64 v91; // [rsp+90h] [rbp-41h]
  __int64 v92; // [rsp+98h] [rbp-39h]
  __int64 v93; // [rsp+A0h] [rbp-31h]
  _OWORD *v94; // [rsp+A8h] [rbp-29h]
  __int64 v95; // [rsp+B0h] [rbp-21h]
  __int64 v96; // [rsp+B8h] [rbp-19h]
  __int64 v97; // [rsp+C0h] [rbp-11h]
  __int64 v98; // [rsp+C8h] [rbp-9h]
  unsigned int v102; // [rsp+138h] [rbp+67h]

  v9 = a5;
  v84 = 0LL;
  P = 0LL;
  v10 = -1;
  v79 = -1;
  v13 = 0LL;
  if ( !a5 || (a8 & 0x18) == 0x18 )
    return (unsigned int)-1073741811;
  Pool2 = ExAllocatePool2(0x100uLL);
  v16 = 0;
  v86 = (_DWORD *)Pool2;
  v17 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v18 = 0;
  v102 = 0;
  v19 = 0;
  for ( i = 0; i < (unsigned int)v9; ++i )
  {
    v21 = a4 + 56LL * i;
    v22 = *(_DWORD *)(v21 + 28);
    if ( !v22
      || v22 > 1 && (!*(_QWORD *)a3 || !*((_QWORD *)a3 + 1) || !*((_QWORD *)a3 + 2) || *(_DWORD *)(v21 + 24) >= v22)
      || (v23 = v22 + v18, v22 + v18 < v18) )
    {
LABEL_27:
      v14 = -1073741811;
      goto LABEL_94;
    }
    v24 = *(_DWORD *)(v21 + 40);
    v18 = v23;
    if ( v24 )
    {
      if ( v24 >= (unsigned int)v9 )
        goto LABEL_27;
      v25 = v24 + v19;
      if ( v24 + v19 < v19 )
        goto LABEL_27;
      v102 = v24 + v19;
      while ( v16 < *(_DWORD *)(v21 + 40) )
      {
        v26 = *(unsigned int *)(*(_QWORD *)(v21 + 48) + 4LL * v16);
        if ( (unsigned int)v26 >= (unsigned int)v9 )
          goto LABEL_27;
        ++v17[3 * v26 + 2];
        ++v16;
      }
      v19 = v25;
      v16 = 0;
    }
    if ( (*(_BYTE *)(v21 + 16) & 4) != 0 )
    {
      if ( v10 != -1 )
        goto LABEL_27;
      v10 = i;
      v79 = i;
    }
  }
  v89 = 0LL;
  v95 = 8 * v9;
  v27 = 480 * v9;
  v87 = 480 * v9;
  v83 = 0LL;
  v90 = 0LL;
  v82 = 0LL;
  v28 = 24LL * v18;
  v29 = v28 + 480 * v9;
  v30 = v29 + 312;
  if ( a7 <= 0 )
  {
    v30 = v28 + 480 * v9;
    v29 = 0LL;
  }
  v98 = v29;
  if ( v19 )
  {
    v83 = v30;
    v82 = (_QWORD *)(8LL * v19 + v30);
    v30 += 16LL * v19;
  }
  v88 = PopFxRuntimeLogNumberEntries * v9;
  v91 = v30 + 24LL * (unsigned int)(PopFxRuntimeLogNumberEntries * v9);
  v96 = 8 * (int)v9 + 16LL;
  v92 = v96 + 40 * v9;
  v93 = v28 + v92;
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, (__int64 **)&v84);
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    P = (PVOID)v84;
    _InterlockedOr(v84 + 58, 1u);
    v34 = (char *)P;
    goto LABEL_39;
  }
  if ( AcpiDeviceByUniqueId == -1073741738 )
  {
    v14 = -1073741661;
  }
  else
  {
    DeviceCommon = PopFxCreateDeviceCommon((__int64)a2, v32, v33, 0, (__int64 *)&P);
    v34 = (char *)P;
    v14 = DeviceCommon;
    if ( P )
    {
      v27 = v87;
LABEL_39:
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v34 + 240), 0x4D584650u, 0, 0, 0x20u);
      v36 = (char *)ExAllocatePool2(0x40uLL);
      if ( v36 && (v37 = ExAllocatePool2(0x40uLL), (v38 = (_QWORD *)v37) != 0LL) )
      {
        v39 = *a3;
        v40 = a3[1];
        v41 = v95;
        *((_DWORD *)v34 + 217) = v9;
        v42 = &v36[v41];
        *((_QWORD *)v34 + 109) = v36;
        *((_OWORD *)v34 + 7) = v39;
        v94 = v42;
        v43 = a3[2];
        *((_OWORD *)v34 + 8) = v40;
        v44 = a3[3];
        *((_OWORD *)v34 + 9) = v43;
        v45 = a3[4];
        *((_OWORD *)v34 + 10) = v44;
        *((_OWORD *)v34 + 11) = v45;
        *((_QWORD *)v34 + 24) = a6;
        *((_DWORD *)v34 + 238) = v79;
        *((_QWORD *)v34 + 80) = 0LL;
        *(_QWORD *)(v34 + 652) = 5LL;
        *((_QWORD *)v34 + 164) = v34 + 1304;
        *((_QWORD *)v34 + 163) = v34 + 1304;
        *(_QWORD *)v37 = a8;
        v85 = &v36[v27];
        *(_DWORD *)(v37 + 8) = v9;
        if ( v102 )
        {
          v89 = &v36[v83];
          v90 = (char *)v82 + (_QWORD)v36;
        }
        v46 = v42 + 48;
        v87 = v37 + v96;
        v47 = -48LL - (_QWORD)v36;
        v97 = -48LL - (_QWORD)v36;
        v82 = (_QWORD *)(v37 + v92);
        v83 = -16 - v37;
        v48 = 0;
        while ( 1 )
        {
          v80 = v48;
          if ( v48 >= (unsigned int)v9 )
            break;
          *(_QWORD *)(*((_QWORD *)v34 + 109) + 8LL * v48) = v42;
          v49 = (__int128 *)(a4 + 56LL * v48);
          if ( (unsigned __int64)v46 + v47 > v91 - 472 )
            goto LABEL_60;
          v50 = *v49;
          *((_DWORD *)v46 - 8) = v48;
          *((_QWORD *)v46 + 4) = v34;
          *(_OWORD *)v42 = v50;
          *((_QWORD *)v46 - 1) = PopFxComponentWork;
          *(_QWORD *)v46 = v42;
          *((_QWORD *)v46 - 3) = 0LL;
          KeInitializeEvent((PRKEVENT)((char *)v46 + 56), NotificationEvent, 1u);
          v51 = v85;
          v52 = 0;
          *((_QWORD *)v46 + 10) = 0LL;
          *((_DWORD *)v46 + 27) = *((_DWORD *)v49 + 7);
          *((_QWORD *)v46 + 14) = v51;
          v53 = *((_DWORD *)v49 + 6);
          *((_DWORD *)v46 + 41) = -1;
          *((_DWORD *)v46 + 30) = v53;
          *((_QWORD *)v46 + 19) = 0LL;
          *((_DWORD *)v46 + 42) = 0;
          *((_QWORD *)v46 + 52) = (char *)v46 + 408;
          *((_QWORD *)v46 + 51) = (char *)v46 + 408;
          *((_QWORD *)v46 + 50) = (char *)v46 + 392;
          *((_QWORD *)v46 + 49) = (char *)v46 + 392;
          v54 = *((_DWORD *)v49 + 10);
          if ( v54 )
          {
            v55 = v89;
            v56 = 0;
            *((_QWORD *)v46 + 16) = v89;
            *((_DWORD *)v46 + 31) = v54;
            do
            {
              v57 = v56++;
              *(_DWORD *)v55 = *(_DWORD *)(*((_QWORD *)v49 + 6) + 4 * v57);
              v55 += 8;
            }
            while ( v56 < *((_DWORD *)v46 + 31) );
            v89 = v55;
          }
          v58 = v86;
          if ( v86[3 * v80 + 2] )
          {
            v59 = v90;
            *((_QWORD *)v46 + 18) = v90;
            v90 = &v59[8 * v58[3 * v80 + 2]];
          }
          v60 = v87;
          v61 = v93;
          v62 = v87 + v83 + 16;
          v38[v80 + 2] = v87;
          if ( v62 > v61 - 40 )
            goto LABEL_60;
          *(_OWORD *)v60 = *v49;
          *(_QWORD *)(v60 + 16) = *((_QWORD *)v49 + 2);
          *(_DWORD *)(v60 + 28) = *((_DWORD *)v49 + 7);
          *(_QWORD *)(v60 + 32) = v82;
          *(_DWORD *)(v60 + 24) = *((_DWORD *)v49 + 6);
          v63 = -16LL - (_QWORD)v36;
          v92 = -16LL - (_QWORD)v36;
          v83 = -16LL - (_QWORD)v38;
          while ( v52 < *((_DWORD *)v46 + 27) )
          {
            if ( (unsigned __int64)&v51[v63 + 16] > v91 - 24 )
              goto LABEL_60;
            v64 = *((_QWORD *)v49 + 4);
            v65 = v85;
            *((_DWORD *)v85 + 4) = *(_DWORD *)(v64 + 24LL * v52 + 16);
            *(_QWORD *)v65 = *(_QWORD *)(v64 + 24LL * v52);
            *((_QWORD *)v65 + 1) = *(_QWORD *)(v64 + 24LL * v52 + 8);
            v85 = v65 + 24;
            if ( (unsigned __int64)v82 + v83 + 16 > v93 - 24 )
              goto LABEL_60;
            v66 = v82;
            *((_DWORD *)v82 + 4) = *(_DWORD *)(v64 + 24LL * v52 + 16);
            *v66 = *(_QWORD *)(v64 + 24LL * v52);
            v51 = v85;
            v66[1] = *(_QWORD *)(v64 + 24LL * v52 + 8);
            v63 = v92;
            ++v52;
            v82 = v66 + 3;
          }
          v42 = (char *)v94 + 472;
          v87 = v60 + 40;
          v47 = v97;
          v46 = (_OWORD *)((char *)v46 + 472);
          v48 = v80 + 1;
          v94 = (_OWORD *)((char *)v94 + 472);
        }
        *((_DWORD *)v34 + 220) = v88;
        *((_QWORD *)v34 + 111) = &v36[v30];
        if ( !v102 || (v14 = PopFxVerifyDependencies(v86, v34, (unsigned int)v9), v14 >= 0) )
        {
          v67 = 0;
          if ( (_DWORD)v9 )
          {
            v68 = 0LL;
            do
            {
              v69 = 0;
              v70 = *(_QWORD *)(v68 + *((_QWORD *)v34 + 109));
              if ( *(_DWORD *)(v70 + 172) )
              {
                do
                {
                  v71 = *(_QWORD *)(*((_QWORD *)v34 + 109) + 8LL * *(unsigned int *)(*(_QWORD *)(v70 + 176) + 8LL * v69));
                  v72 = *(unsigned int *)(v71 + 188);
                  *(_DWORD *)(*(_QWORD *)(v71 + 192) + 8 * v72) = v67;
                  *(_DWORD *)(*(_QWORD *)(v71 + 192) + 8 * v72 + 4) = v69++;
                  ++*(_DWORD *)(v71 + 188);
                }
                while ( v69 < *(_DWORD *)(v70 + 172) );
              }
              PopFxActivateComponent((ULONG_PTR)v34, v70, 0);
              ++v67;
              v68 += 8LL;
            }
            while ( v67 < (unsigned int)v9 );
          }
          if ( a7 > 0 )
          {
            *((_QWORD *)v34 + 3) = &v36[v98];
            Irp = IoAllocateIrp(a7 + 2, 0);
            *((_QWORD *)v34 + 2) = Irp;
            if ( !Irp )
            {
LABEL_60:
              v14 = -1073741670;
              goto LABEL_87;
            }
          }
          if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, (__int64)v34, (int)v38) )
            PopFxBugCheck(0x601uLL, (ULONG_PTR)v34, (ULONG_PTR)v38, 0LL);
          PopPlRegisterDevice((__int64)v34, v74, v75);
          if ( (*v38 & 0x10) == 0 && ((*v38 & 8) != 0 || PopPoFxSystemIrpWaitForReportDevicePoweredReg) )
          {
            _InterlockedOr((volatile signed __int32 *)v34 + 216, 0x80u);
            v34 = (char *)P;
          }
          if ( (*(_BYTE *)v38 & 0x20) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v34 + 216, 0x1000u);
            v34 = (char *)P;
          }
          if ( (*(_BYTE *)v38 & 0x40) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v34 + 216, 1u);
            v34 = (char *)P;
          }
          v76 = (__int64)&v36[v95];
          if ( (_DWORD)v9 )
          {
            v77 = (_DWORD *)((char *)v38 + v96 + 28);
            do
            {
              if ( (*(_BYTE *)(v77 - 3) & 2) != 0 )
                *(_DWORD *)(v76 + 92) |= 2u;
              *(_DWORD *)(v76 + 156) = *v77;
              PopPlRegisterComponent(v76);
              v76 += 472LL;
              v77 += 10;
              --v9;
            }
            while ( v9 );
            v34 = (char *)P;
          }
          v36 = 0LL;
          v14 = 0;
          *a9 = v34;
          v34 = 0LL;
        }
LABEL_87:
        ExFreePoolWithTag(v38, 0x4D584650u);
      }
      else
      {
        v14 = -1073741670;
      }
      v13 = (__int64 *)v84;
      if ( v34 && !v84 )
        ExFreePoolWithTag(v34, 0x4D584650u);
      if ( v36 )
        ExFreePoolWithTag(v36, 0x4D584650u);
      v17 = v86;
      goto LABEL_94;
    }
  }
  v13 = (__int64 *)v84;
LABEL_94:
  ExFreePoolWithTag(v17, 0x4D584650u);
  if ( v13 )
    PopFxReleaseAcpiRefDevice((__int64)v13, (void *)0x66466F50);
  return (unsigned int)v14;
}
