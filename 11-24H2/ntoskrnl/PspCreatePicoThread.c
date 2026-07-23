/*
 * XREFs of PspCreatePicoThread @ 0x140A91570
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // ebx
  int inserted; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE *v12; // rdx
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v15; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  __int64 v18[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h]
  _BYTE v20[416]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+240h] [rbp+140h]
  __int64 v22[6]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v23; // [rsp+2E0h] [rbp+1E0h]
  int v24; // [rsp+2E4h] [rbp+1E4h]
  __int16 v25; // [rsp+2E8h] [rbp+1E8h]
  int v26; // [rsp+2EAh] [rbp+1EAh]
  __int16 v27; // [rsp+2EEh] [rbp+1EEh]
  __int16 v28; // [rsp+2F0h] [rbp+1F0h]
  __int16 v29; // [rsp+2F2h] [rbp+1F2h]
  __int64 v30; // [rsp+328h] [rbp+228h]
  __int64 v31; // [rsp+330h] [rbp+230h]
  __int64 v32; // [rsp+338h] [rbp+238h]
  __int64 v33; // [rsp+340h] [rbp+240h]
  __int64 v34; // [rsp+348h] [rbp+248h]
  __int64 v35; // [rsp+350h] [rbp+250h]
  __int64 v36; // [rsp+358h] [rbp+258h]
  __int64 v37; // [rsp+360h] [rbp+260h]
  __int64 v38; // [rsp+368h] [rbp+268h]
  __int64 v39; // [rsp+370h] [rbp+270h]
  __int64 v40; // [rsp+378h] [rbp+278h]
  __int64 v41; // [rsp+380h] [rbp+280h]
  __int64 v42; // [rsp+388h] [rbp+288h]
  __int64 v43; // [rsp+390h] [rbp+290h]
  __int64 v44; // [rsp+398h] [rbp+298h]
  __int64 v45; // [rsp+3A0h] [rbp+2A0h]
  __int64 v46; // [rsp+3A8h] [rbp+2A8h]
  __int16 v47; // [rsp+3B0h] [rbp+2B0h]
  int v48; // [rsp+3C8h] [rbp+2C8h]
  __int64 v49[50]; // [rsp+780h] [rbp+680h] BYREF

  memset_0(v20, 0, 0x210uLL);
  v6 = 0LL;
  LODWORD(v14) = 0;
  v17 = 0LL;
  memset_0(v49, 0, sizeof(v49));
  v15 = 0LL;
  v19 = 0LL;
  *(_OWORD *)v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  Object = 0LL;
  if ( !*(_QWORD *)(a1 + 184) )
  {
    v6 = (struct _EX_RUNDOWN_REF *)Object;
    inserted = -1073741811;
    goto LABEL_20;
  }
  inserted = ObpReferenceObjectByHandleWithTag(
               *(_QWORD *)a1,
               2,
               (__int64)PsProcessType,
               0,
               0x72437350u,
               &Object,
               0LL,
               0LL);
  if ( inserted < 0 )
  {
LABEL_14:
    if ( v15 )
      ObfDereferenceObject(v15);
    if ( v8 < 2 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v6 = (struct _EX_RUNDOWN_REF *)Object;
  if ( !*((_QWORD *)Object + 200) )
  {
    inserted = -1073741816;
    goto LABEL_14;
  }
  --CurrentThread->KernelApcDisable;
  v8 = 1;
  if ( !ExAcquireRundownProtection_0(v6 + 61) )
  {
    inserted = -1073741558;
    goto LABEL_14;
  }
  v8 = 3;
  ObfReferenceObjectWithTag(v6, 0x72437350u);
  memset_0(v22, 0, 0x4D0uLL);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 32);
  v46 = *(_QWORD *)(a1 + 16);
  v29 = 43;
  v25 = 51;
  v47 = 639;
  v34 = *(_QWORD *)(a1 + 8);
  v27 = *(_WORD *)(a1 + 56);
  v28 = *(_WORD *)(a1 + 58);
  v18[1] = *(_QWORD *)(a1 + 40);
  v19 = *(_QWORD *)(a1 + 48);
  v30 = *(_QWORD *)(a1 + 64);
  v33 = *(_QWORD *)(a1 + 72);
  v37 = *(_QWORD *)(a1 + 96);
  v36 = *(_QWORD *)(a1 + 104);
  v35 = *(_QWORD *)(a1 + 112);
  v38 = *(_QWORD *)(a1 + 120);
  v39 = *(_QWORD *)(a1 + 128);
  v40 = *(_QWORD *)(a1 + 136);
  v41 = *(_QWORD *)(a1 + 144);
  v42 = *(_QWORD *)(a1 + 152);
  v43 = *(_QWORD *)(a1 + 160);
  v44 = *(_QWORD *)(a1 + 168);
  v45 = *(_QWORD *)(a1 + 176);
  v31 = v10;
  v32 = v11;
  v24 = 8064;
  v48 = 8064;
  v23 = 1048587;
  v26 = 2818091;
  LODWORD(v14) = 1;
  v18[0] = 0LL;
  inserted = PspAllocateThread(
               (ULONG_PTR)v6,
               0LL,
               0,
               0LL,
               (size_t)v22,
               v18,
               0LL,
               0LL,
               (int *)&v14,
               &v15,
               0LL,
               (__int64)v49);
  if ( inserted >= 0 )
  {
    v12 = 0LL;
    if ( a2 )
    {
      memset_0(v20, 0, 0x210uLL);
      v12 = v20;
      v21 = a2;
    }
    *((_QWORD *)v15 + 206) = *(_QWORD *)(a1 + 184);
    inserted = PspInsertThread(
                 (char *)v15,
                 (ULONG_PTR)v6,
                 0LL,
                 &v14,
                 0x1FFFFF,
                 0LL,
                 (__int64)v12,
                 0LL,
                 (__int64)v49,
                 &v17,
                 0LL);
    if ( inserted >= 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)v15 + 360, 0x14u);
      inserted = 0;
      v6 = (struct _EX_RUNDOWN_REF *)Object;
      *a3 = v17;
    }
    goto LABEL_14;
  }
  v15 = 0LL;
LABEL_17:
  ExReleaseRundownProtection_0(v6 + 61);
LABEL_18:
  if ( (v8 & 1) != 0 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
LABEL_20:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x72437350u);
  return (unsigned int)inserted;
}
