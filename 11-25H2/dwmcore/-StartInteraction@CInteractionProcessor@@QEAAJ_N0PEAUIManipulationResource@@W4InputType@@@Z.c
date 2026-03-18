/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x18021C6C8
 * Callers:
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z @ 0x18021C660 (-StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z.c)
 *     ?StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z @ 0x18021C690 (-StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x180263290 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_.c)
 * Callees:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801F1FB8 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::StartInteraction(_QWORD *a1, __int64 a2, char a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  int v7; // ecx
  char v10; // r14
  int v11; // eax
  bool v12; // si
  int v13; // r12d
  char v14; // r15
  char v15; // al
  __int64 v16; // rcx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  void (*v21)(void); // rax
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // al

  v5 = 0;
  v7 = *((_DWORD *)a1 + 196);
  v10 = a2;
  if ( (_BYTE)a2 || (unsigned int)(v7 - 2) <= 2 )
  {
    if ( (unsigned int)(v7 - 2) > 2 )
    {
      v11 = 3;
      *((_DWORD *)a1 + 196) = 3;
    }
    else
    {
      v11 = v7;
    }
    v10 = 1;
  }
  else
  {
    *((_DWORD *)a1 + 196) = 1;
    v11 = 1;
  }
  *((_DWORD *)a1 + 317) = 0;
  v12 = (a1[158] & 8) != 0 && !v7 && v11;
  v13 = 0;
  if ( a4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a4 + 48LL))(a4) )
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 64LL))(a4);
  if ( a5 != 1 )
  {
    switch ( a5 )
    {
      case 2:
        v24 = *a1;
        v25 = (2 * a3) | *((_BYTE *)a1 + 148) & 0xFD;
        *((_DWORD *)a1 + 38) = v13;
        *((_BYTE *)a1 + 148) = v25 | 1;
        if ( v24 )
        {
          if ( v12 )
          {
            LOBYTE(a2) = v12;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 80LL))(v24, a2);
          }
          if ( v10 )
          {
            v21 = *(void (**)(void))(*(_QWORD *)*a1 + 64LL);
            goto LABEL_24;
          }
          return v5;
        }
        break;
      case 3:
        v18 = a1[20];
        v19 = (2 * a3) | *((_BYTE *)a1 + 308) & 0xFD;
        *((_DWORD *)a1 + 78) = v13;
        *((_BYTE *)a1 + 308) = v19 | 1;
        if ( v18 )
        {
          if ( v12 )
          {
            LOBYTE(a2) = v12;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 80LL))(v18, a2);
          }
          if ( !v10 )
            return v5;
          v20 = a1[20];
          goto LABEL_23;
        }
        break;
      case 4:
        if ( !CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
          return v5;
        v14 = 2 * a3;
        goto LABEL_54;
      case 6:
        v22 = a1[60];
        v23 = (2 * a3) | *((_BYTE *)a1 + 628) & 0xFD;
        *((_DWORD *)a1 + 158) = v13;
        *((_BYTE *)a1 + 628) = v23 | 1;
        if ( !v22 )
          return (unsigned int)-2147019873;
        if ( v12 )
        {
          LOBYTE(a2) = v12;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 80LL))(v22, a2);
        }
        if ( !v10 )
          return v5;
        v20 = a1[60];
LABEL_23:
        v21 = *(void (**)(void))(*(_QWORD *)v20 + 64LL);
LABEL_24:
        v21();
        return v5;
      default:
        return v5;
    }
    return (unsigned int)-2147019873;
  }
  v14 = 2 * a3;
  v15 = *((_BYTE *)a1 + 148) & 0xFD;
  *((_DWORD *)a1 + 38) = v13;
  v16 = *a1;
  *((_BYTE *)a1 + 148) = v14 | v15 | 1;
  if ( !v16 )
    return (unsigned int)-2147019873;
  if ( v12 )
  {
    LOBYTE(a2) = v12;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 80LL))(v16, a2);
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  v26 = a1[20];
  v27 = v14 | *((_BYTE *)a1 + 308) & 0xFD;
  *((_DWORD *)a1 + 78) = v13;
  *((_BYTE *)a1 + 308) = v27 | 1;
  if ( !v26 )
    return (unsigned int)-2147019873;
  if ( v12 )
  {
    LOBYTE(a2) = v12;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 80LL))(v26, a2);
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[20] + 64LL))(a1[20]);
  if ( !CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
    return v5;
  v5 = 0;
LABEL_54:
  v29 = a1[40];
  v30 = v14 | *((_BYTE *)a1 + 468) & 0xFD;
  *((_DWORD *)a1 + 118) = v13;
  *((_BYTE *)a1 + 468) = v30 | 1;
  if ( !v29 )
    return (unsigned int)-2147019873;
  if ( v12 )
  {
    LOBYTE(v28) = v12;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 80LL))(v29, v28);
  }
  if ( v10 )
  {
    v20 = a1[40];
    goto LABEL_23;
  }
  return v5;
}
