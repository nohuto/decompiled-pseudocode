/*
 * XREFs of NtCreateThreadEx @ 0x1408A2B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspBuildCreateProcessContext @ 0x1408A2E70 (PspBuildCreateProcessContext.c)
 *     PspCreateThread @ 0x1408A42C8 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x1408A4758 (PspDeleteCreateProcessContext.c)
 */

__int64 __fastcall NtCreateThreadEx(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  ULONG *v13; // r12
  char *v14; // r14
  ULONG *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 result; // rax
  _DWORD *v19; // rdi
  __int64 v20; // r12
  unsigned __int64 v21; // rax
  void *v22; // rsp
  unsigned int Thread; // ebx
  ULONG v24[8]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v25; // [rsp+80h] [rbp-40h]
  _WORD v26[12]; // [rsp+88h] [rbp-38h] BYREF
  char v27; // [rsp+A0h] [rbp-20h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-18h]
  __int64 v29; // [rsp+B0h] [rbp-10h]
  __int64 v30; // [rsp+B8h] [rbp-8h]
  unsigned int v31; // [rsp+C0h] [rbp+0h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+8h] BYREF
  __int64 v33; // [rsp+D0h] [rbp+10h]
  __int64 v34; // [rsp+D8h] [rbp+18h]
  __int64 v35; // [rsp+E0h] [rbp+20h]
  __int64 v36; // [rsp+E8h] [rbp+28h] BYREF
  __int64 v37; // [rsp+F0h] [rbp+30h]
  ULONG *v38; // [rsp+F8h] [rbp+38h]
  __int64 v39; // [rsp+100h] [rbp+40h]
  _BYTE v40[24]; // [rsp+110h] [rbp+50h] BYREF
  __int64 v41; // [rsp+128h] [rbp+68h]
  __int64 v42; // [rsp+148h] [rbp+88h]
  __int16 v43; // [rsp+150h] [rbp+90h]
  int v44; // [rsp+168h] [rbp+A8h]

  v39 = a3;
  LODWORD(v33) = a2;
  v35 = a5;
  v34 = a6;
  Object = 0LL;
  v36 = 0LL;
  v31 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( (a7 & 0xFFFFFF80) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v16 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v16 = a1;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  memset_0(v40, 0, 0x1F0uLL);
  if ( !a11
    || (LOBYTE(v17) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(a11, v17, 1LL, v40),
        (int)result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v19 = Object;
      if ( (*((_BYTE *)Object + 368) & 1) == 0 )
      {
        v14 = &v27;
        v27 = 0;
        v29 = a9;
        v30 = a10;
        v28 = a8;
        v38 = v24;
        memset_0(v24, 0, 0x48uLL);
        v20 = (v19[469] & 0x4000) != 0 ? 0x800 : 0;
        LODWORD(Object) = (v19[469] & 0x4000) != 0 ? 1048651 : 1048587;
        v37 = qword_140FC6440;
        RtlGetExtendedContextLength2((unsigned int)Object, &v31, (unsigned int)v20);
        v21 = v31 + 15LL;
        if ( v21 <= v31 )
          v21 = 0xFFFFFFFFFFFFFF0LL;
        v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
        v15 = v24;
        memset_0(v24, 0, v31);
        RtlInitializeExtendedContext2((__int64)v24, (unsigned int)Object, &v36, v20);
        v42 = v37;
        v33 = v35;
        *(_QWORD *)&v26[1] = 0x2B0053002B002BLL;
        v26[5] = 43;
        strcpy((char *)v26, "3");
        HIDWORD(v25) = 8064;
        v43 = 639;
        v44 = 8064;
        v13 = v38;
      }
      ObfDereferenceObjectWithTag(v19, 0x72437350u);
      Thread = PspCreateThread(a1, (unsigned int)v33, v39, a4, 0LL, v40, v41, v15, v13, a7, v35, v34, v14);
      PspDeleteCreateProcessContext(v40);
      return Thread;
    }
  }
  return result;
}
