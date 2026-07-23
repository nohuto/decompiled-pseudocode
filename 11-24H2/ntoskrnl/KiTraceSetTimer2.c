/*
 * XREFs of KiTraceSetTimer2 @ 0x1403AFE00
 * Callers:
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KiUpdateTimer2Flags @ 0x1403AF1F0 (KiUpdateTimer2Flags.c)
 *     KiTraceCancelTimer2 @ 0x14049F2D0 (KiTraceCancelTimer2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiTraceSetTimer2(__int64 a1, char a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // rsi
  __int64 v7; // r15
  char v8; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  char v13; // cl
  char v14; // r8
  char v15; // cl
  char v16; // dl
  char v17; // cl
  _QWORD *v19; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+38h] [rbp-48h]
  int v21; // [rsp+3Ch] [rbp-44h]
  _QWORD v22[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  unsigned __int64 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 72);
  v27 = 0LL;
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_BYTE *)(a1 + 129);
  v22[0] = v3;
  v22[1] = *(_QWORD *)(a1 + 80);
  v23 = *(_QWORD *)(a1 + 88);
  KiUpdateTimer2Flags((volatile signed __int32 *)a1, a3, 0);
  if ( a3 == 1 )
    KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
  v10 = __ROL8__(v6 ^ KiWaitNever, KiWaitNever);
  v11 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v7 ^ KiWaitNever, KiWaitNever));
  v12 = KiWaitAlways ^ _byteswap_uint64(a1 ^ v10);
  if ( a2 )
    KiTraceCancelTimer2(a1, v12);
  v25 = v12;
  v24 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v12 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
  v26 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v11), KiWaitNever));
  v13 = (2 * (v8 & 0x20)) | 4;
  if ( (v8 & 2) == 0 )
    v13 = 2 * (v8 & 0x20);
  v14 = v13;
  v15 = v13 | 8;
  if ( (v8 & 4) == 0 )
    v15 = v14;
  v16 = v15;
  v17 = v15 | 0x10;
  if ( (v8 & 8) == 0 )
    v17 = v16;
  LOBYTE(v27) = v17;
  if ( v12 )
  {
    v17 |= 1u;
    LOBYTE(v27) = v17;
  }
  if ( v23 )
    LOBYTE(v27) = v17 | 2;
  v21 = 0;
  v19 = v22;
  v20 = 56;
  return EtwTraceKernelEvent((int)&v19, 1, 0x40020000u, 3944, 6298370);
}
