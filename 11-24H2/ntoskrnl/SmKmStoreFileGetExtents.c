/*
 * XREFs of SmKmStoreFileGetExtents @ 0x14079B060
 * Callers:
 *     SmKmStoreFileCreate @ 0x14079A858 (SmKmStoreFileCreate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1406A7AD0 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileGetExtents(
        HANDLE FileHandle,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        struct _PRIVILEGE_SET **a9,
        unsigned int *a10)
{
  __int64 v10; // r12
  unsigned int v14; // r15d
  struct _PRIVILEGE_SET *v15; // rdi
  BOOLEAN v16; // r14
  __int64 *v17; // rbx
  NTSTATUS Status; // ebx
  int v19; // r14d
  unsigned int v20; // esi
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned __int64 v26; // r13
  int v27; // eax
  __int64 v28; // rcx
  BOOLEAN v30; // [rsp+50h] [rbp-79h]
  PVOID P; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v32; // [rsp+60h] [rbp-69h]
  unsigned int v33; // [rsp+64h] [rbp-65h] BYREF
  struct _PRIVILEGE_SET *v34; // [rsp+68h] [rbp-61h] BYREF
  __int64 v35; // [rsp+70h] [rbp-59h]
  _QWORD *v36; // [rsp+78h] [rbp-51h]
  _DWORD *v37; // [rsp+80h] [rbp-49h]
  struct _PRIVILEGE_SET **v38; // [rsp+88h] [rbp-41h]
  unsigned int *v39; // [rsp+90h] [rbp-39h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-31h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-19h]
  __int64 v43; // [rsp+C0h] [rbp-9h]

  v10 = 0LL;
  v37 = a8;
  v38 = a9;
  v39 = a10;
  v32 = a4;
  v14 = 0x10000;
  v36 = a3;
  v15 = 0LL;
  IoStatusBlock = 0LL;
  P = 0LL;
  v34 = 0LL;
  v16 = IoSetThreadHardErrorMode(0);
  v30 = v16;
  if ( a7 )
  {
    v17 = &v41;
    v41 = *a3;
    v42 = 0LL;
    P = &v41;
    v43 = 0LL;
  }
  else
  {
    Status = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9003Bu, a3, 8u, &P, 8u);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((PVOID)(a2 + 152), Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      goto LABEL_27;
    v17 = (__int64 *)P;
  }
  v19 = 0;
  v20 = 0;
  v33 = 0;
  while ( 1 )
  {
    v21 = *v17;
    if ( !*v17 )
      break;
    v22 = v17[1];
    v10 += v21;
    if ( v22 < 0 )
      goto LABEL_21;
    if ( v14 )
    {
      if ( v21 >= v14 )
        v23 = v14;
      else
        v23 = (unsigned int)v21;
      v22 += v23;
      v14 -= v23;
      v21 -= v23;
      v17[1] = v22;
      *v17 = v21;
    }
    if ( v21 >= v32 )
    {
      v24 = a5 - ((a5 - 1) & (v22 + a5 - 1LL));
      v25 = v21 - (v22 + v24 - 1);
      v35 = v22 + v24 - 1;
      v26 = (v22 + v25) / (unsigned __int64)v32;
      if ( (_DWORD)v26 )
      {
        v27 = SmArrayGrow(v20, (v22 + v25) % (unsigned __int64)v32, &v33, (const void **)&v34);
        v15 = v34;
        if ( !v27 )
        {
          Status = -1073741670;
          goto LABEL_26;
        }
        v19 += v26;
        v28 = 2LL * v20++;
        *((_QWORD *)&v34->Privilege[0].Luid + v28) = v35;
        *(&v15->PrivilegeCount + 2 * v28) = v26;
      }
    }
    v17 += 2;
  }
  if ( v10 < *v36 )
  {
LABEL_21:
    Status = -1073741453;
    goto LABEL_26;
  }
  if ( v19 )
  {
    *v37 = v19;
    *v38 = v15;
    v15 = 0LL;
    Status = 0;
    *v39 = v20;
  }
  else
  {
    Status = -1073741672;
  }
LABEL_26:
  v16 = v30;
LABEL_27:
  if ( P && P != &v41 )
    ExFreePoolWithTag(P, 0);
  if ( v15 )
    CmSiFreeMemory(v15);
  IoSetThreadHardErrorMode(v16);
  return (unsigned int)Status;
}
