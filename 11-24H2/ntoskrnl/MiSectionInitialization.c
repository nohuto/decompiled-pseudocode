/*
 * XREFs of MiSectionInitialization @ 0x140C558B4
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     ObInsertObject @ 0x140853260 (ObInsertObject.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 MiSectionInitialization()
{
  _QWORD *Pool; // rbx
  _QWORD *v2; // r10
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v5; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v6[2]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v7[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v8; // [rsp+90h] [rbp-78h]
  _QWORD *v9; // [rsp+98h] [rbp-70h]
  int v10; // [rsp+A0h] [rbp-68h]
  int v11; // [rsp+A4h] [rbp-64h]
  __int128 v12; // [rsp+A8h] [rbp-60h]
  __int16 v13; // [rsp+B8h] [rbp-50h] BYREF
  char v14; // [rsp+BAh] [rbp-4Eh]
  int v15; // [rsp+BCh] [rbp-4Ch]
  int v16; // [rsp+C0h] [rbp-48h]
  __int128 v17; // [rsp+C4h] [rbp-44h]
  int v18; // [rsp+D4h] [rbp-34h]
  int v19; // [rsp+DCh] [rbp-2Ch]
  int v20; // [rsp+E0h] [rbp-28h]
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64); // [rsp+F0h] [rbp-18h]
  __int64 (__fastcall *v22)(__int64, __int64); // [rsp+F8h] [rbp-10h]
  __int64 (__fastcall *v23)(__int64); // [rsp+100h] [rbp-8h]

  *(_QWORD *)&v5.Length = 1048590LL;
  v7[1] = 0;
  v5.Buffer = L"Section";
  v11 = 0;
  Object = 0LL;
  Handle = 0LL;
  v6[0] = 3014700LL;
  v6[1] = L"\\Device\\PhysicalMemory";
  qword_140E2CD48 = 0LL;
  memset_0(&v13, 0, 0x78uLL);
  v14 |= 4u;
  v21 = MiSectionOpen;
  v13 = 120;
  v22 = MiSectionClose;
  v16 = 256;
  v23 = MiSectionDelete;
  v19 = 1;
  v20 = 64;
  v18 = 983071;
  v15 = 128;
  v17 = MiSectionMapping;
  if ( (int)ObCreateObjectType(&v5, &v13, 0LL, (__int64)&MmSectionObjectType) < 0 )
    return 0LL;
  Pool = (_QWORD *)MiAllocatePool(0x100uLL, 0x48uLL, 1733520717);
  if ( !Pool )
    return 0LL;
  memset_0(&qword_140E2D610, 0, 0x80uLL);
  memset_0(&qword_140E2D578, 0, 0x98uLL);
  Pool[5] = 0LL;
  dword_140E2D648 |= 0x400u;
  v9 = v6;
  qword_140E2D578 = (__int64)&qword_140E2D610;
  qword_140E2D610 = (__int64)Pool;
  qword_140E2D628 = 1LL;
  *Pool = &qword_140E2D610;
  v7[0] = 48;
  v8 = 0LL;
  v10 = 65552;
  v12 = 0LL;
  if ( (int)ObCreateObject(0, MmSectionObjectType, (__int64)v7, 0, 0, 64, 64, 0, &Object) < 0 )
  {
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v2 = Object;
  *((_QWORD *)Object + 5) = &qword_140E2D610;
  v2[6] = (1LL << dword_140E2DC78) - 1;
  *((_DWORD *)v2 + 14) = 0;
  *((_DWORD *)v2 + 15) = *((_DWORD *)v2 + 15) & 0xFFFFF000 | 0x40;
  if ( ObInsertObject(v2, 0LL, 4u, 0, 0LL, &Handle) < 0 )
    return 0LL;
  ObCloseHandle(Handle, 0);
  qword_140E2D760 = MiReservePtes((__int64)&qword_140E376A8, 1u);
  if ( !qword_140E2D760 )
    return 0LL;
  qword_140E2D758 = 0LL;
  return 1LL;
}
