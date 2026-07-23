/*
 * XREFs of PipChangeDeviceObjectFromRegistryProperties @ 0x14097F72C
 * Callers:
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140449130 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObSetSecurityObjectByPointer @ 0x140854A90 (ObSetSecurityObjectByPointer.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1408ABD7C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PipGetRegistryDwordWithFallback @ 0x14097FAAC (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14097FB88 (PipGetRegistrySecurityWithFallback.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipChangeDeviceObjectFromRegistryProperties(__int64 a1, int a2, ACL *a3, __int64 a4, char a5)
{
  int v5; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  PVOID v11; // r13
  __int64 v12; // rdx
  int v13; // esi
  int v14; // esi
  char RegistryDwordWithFallback; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  int v19; // r15d
  __int64 v20; // rcx
  DWORD v21; // r14d
  __int64 v22; // rdx
  int v23; // r15d
  __int64 RegistrySecurityWithFallback; // rax
  unsigned int v25; // r12d
  char **v26; // rdi
  __int16 v27; // cx
  __int64 v28; // rax
  char *v29; // rax
  __int64 v30; // rax
  char *v31; // rax
  int DaclSecurityDescriptor; // esi
  __int64 i; // rax
  __int64 v34; // rdx
  char v36; // [rsp+40h] [rbp-61h]
  BOOLEAN DaclPresent; // [rsp+41h] [rbp-60h] BYREF
  char v38; // [rsp+42h] [rbp-5Fh]
  char v39; // [rsp+43h] [rbp-5Eh]
  DWORD v40; // [rsp+44h] [rbp-5Dh] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+48h] [rbp-59h] BYREF
  int v42; // [rsp+4Ch] [rbp-55h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-51h] BYREF
  PVOID v44; // [rsp+58h] [rbp-49h] BYREF
  PVOID P; // [rsp+60h] [rbp-41h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-39h] BYREF
  __int64 v47; // [rsp+70h] [rbp-31h]
  _OWORD v48[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v49; // [rsp+98h] [rbp-9h]

  v5 = (int)a3;
  Dacl = a3;
  v47 = a4;
  v8 = a1;
  if ( a1 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 312);
  v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 48);
  v36 = 0;
  P = 0LL;
  v13 = *(_DWORD *)(v10 + 32);
  v44 = 0LL;
  v14 = v13 & 0x800;
  v43 = 0;
  v42 = 0;
  v40 = 0;
  RegistryDwordWithFallback = PipGetRegistryDwordWithFallback(26, v12, a2, (_DWORD)a3, a4, (__int64)&v43);
  v16 = *(_QWORD *)(v9 + 48);
  v38 = RegistryDwordWithFallback;
  v17 = PipGetRegistryDwordWithFallback(27, v16, a2, v5, a4, (__int64)&v42);
  v18 = *(_QWORD *)(v9 + 48);
  v39 = v17;
  PipGetRegistryDwordWithFallback(28, v18, a2, v5, a4, (__int64)&v40);
  if ( a5 || (v20 = *(_QWORD *)(v8 + 24)) == 0 )
  {
    v19 = 0;
    v20 = v8;
    if ( !v8 )
      goto LABEL_6;
  }
  else
  {
    v19 = 0;
  }
  do
  {
    v19 |= *(_DWORD *)(v20 + 52);
    v20 = *(_QWORD *)(v20 + 24);
  }
  while ( v20 );
LABEL_6:
  v21 = 0;
  v22 = *(_QWORD *)(v9 + 48);
  v23 = (v40 | v19) & 0x5010F;
  v40 = 0;
  RegistrySecurityWithFallback = PipGetRegistrySecurityWithFallback(
                                   v14 != 0 ? v47 : 0,
                                   v22,
                                   a2,
                                   v14 != 0 ? (unsigned int)Dacl : 0,
                                   v47 & -(__int64)(v14 != 0));
  v25 = v43;
  v26 = (char **)RegistrySecurityWithFallback;
  if ( !RegistrySecurityWithFallback )
  {
    if ( !v38 )
      goto LABEL_26;
    v49 = 0LL;
    memset(v48, 0, sizeof(v48));
    v26 = (char **)IopCreateDefaultDeviceSecurityDescriptor(v43, v23, 0, v48, (ACL **)&P, (__int64)&v44, &v40);
    if ( !v26 )
    {
      v11 = v44;
      DaclSecurityDescriptor = -1073741823;
      goto LABEL_38;
    }
    v21 = v40;
    v36 = 1;
    goto LABEL_24;
  }
  if ( *(_BYTE *)RegistrySecurityWithFallback != 1 )
  {
    DaclSecurityDescriptor = -1073741736;
LABEL_45:
    ExFreePoolWithTag(v26, 0);
    goto LABEL_38;
  }
  v27 = *(_WORD *)(RegistrySecurityWithFallback + 2);
  if ( v27 >= 0 )
  {
    v29 = *(char **)(RegistrySecurityWithFallback + 8);
  }
  else
  {
    v28 = *(unsigned int *)(RegistrySecurityWithFallback + 4);
    if ( (_DWORD)v28 )
      v29 = (char *)v26 + v28;
    else
      v29 = 0LL;
  }
  if ( v29 )
    v21 = 1;
  if ( v27 >= 0 )
  {
    v31 = v26[2];
  }
  else
  {
    v30 = *((unsigned int *)v26 + 2);
    if ( !(_DWORD)v30 )
      goto LABEL_18;
    v31 = (char *)v26 + v30;
  }
  if ( v31 )
    v21 |= 2u;
LABEL_18:
  DaclPresent = (v27 & 0x10) != 0;
  if ( (v27 & 0x10) != 0 )
    v21 |= 8u;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v26, &DaclPresent, &Dacl, DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_45;
  if ( DaclPresent )
    v21 |= 4u;
  if ( v38 )
LABEL_24:
    *(_DWORD *)(v8 + 72) = v25;
LABEL_26:
  if ( v39 && v42 )
    *(_DWORD *)(v8 + 48) |= 8u;
  *(_DWORD *)(v8 + 52) = v23 | *(_DWORD *)(v8 + 52) & 0xFFFAFEF0;
  for ( i = *(_QWORD *)(v8 + 24); i; i = *(_QWORD *)(i + 24) )
    *(_DWORD *)(i + 52) |= v23;
  DaclSecurityDescriptor = 0;
  if ( v26 )
    DaclSecurityDescriptor = ObSetSecurityObjectByPointer(v8, v21, (unsigned __int64)v26);
  v34 = v8 + 312;
  do
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 16LL) & 0x100) != 0 )
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34 + 40LL) + 396LL) |= 0xC00000u;
    if ( v36 && *(_QWORD *)(v8 + 272) )
      *(_DWORD *)(*(_QWORD *)(v8 + 312) + 32LL) |= 0x800u;
    v8 = *(_QWORD *)(v8 + 24);
  }
  while ( v8 );
  v11 = v44;
  if ( v26 && !v36 )
    goto LABEL_45;
LABEL_38:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)DaclSecurityDescriptor;
}
