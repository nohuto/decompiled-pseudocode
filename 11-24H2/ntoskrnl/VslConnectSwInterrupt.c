/*
 * XREFs of VslConnectSwInterrupt @ 0x140C6722C
 * Callers:
 *     KiConnectSwInterrupt @ 0x140C2A7B4 (KiConnectSwInterrupt.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C65540 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvlIsCoreSharingPossible @ 0x14057FB48 (HvlIsCoreSharingPossible.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     KiAreCodePatchesAllowed @ 0x140C28C20 (KiAreCodePatchesAllowed.c)
 *     VslpRecordBootRanges @ 0x140C69290 (VslpRecordBootRanges.c)
 */

__int64 __fastcall VslConnectSwInterrupt(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v4; // eax
  __int64 v5; // r14
  int v6; // eax
  struct _MDL *Pool2; // rax
  int v8; // eax
  __int64 Prcb; // rax
  int v10; // edx
  ULONG_PTR v11; // r15
  __int64 v12; // rsi
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // rdx
  ULONG_PTR i; // r8
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r12d
  __int64 **v19; // rbx
  unsigned int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v22[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v23; // [rsp+48h] [rbp-B8h]
  int v24; // [rsp+4Ah] [rbp-B6h]
  __int16 v25; // [rsp+4Eh] [rbp-B2h]
  __int128 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-A0h]
  __int128 v28; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-80h]
  __int128 v30; // [rsp+90h] [rbp-70h]
  __int128 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  _OWORD v33[6]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+120h] [rbp+20h]
  __int64 *v35[2]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v36; // [rsp+142h] [rbp+42h]
  __int64 v37; // [rsp+168h] [rbp+68h]
  _QWORD v38[9]; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v39[10]; // [rsp+1C0h] [rbp+C0h] BYREF

  v24 = 0;
  v25 = 0;
  v21 = 0;
  memset_0(v33, 0, 0x68uLL);
  if ( !*(_QWORD *)&HvlpVsmVtlCallVa )
    return 3224698910LL;
  memset_0(v35, 0, 0xD8uLL);
  if ( BugCheckParameter2 )
  {
    v4 = VslpRecordBootRanges(BugCheckParameter2, BugCheckParameter3);
    if ( v4 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFAuLL, BugCheckParameter2, BugCheckParameter3, v4);
  }
  v5 = 2LL;
  v6 = VslpLockPagesForTransfer((__int64)v38, (struct _MDL *)&VslpTraceLog, 0xA08u, IoModifyAccess, 0);
  if ( v6 < 0 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFCuLL, (ULONG_PTR)&VslpTraceLog, 0xA08uLL, v6);
  memset_0(&v26, 0, 0x68uLL);
  *(_QWORD *)&v28 = v38[0];
  *((_QWORD *)&v28 + 1) = v38[7];
  if ( KiAreCodePatchesAllowed() )
  {
    Pool2 = (struct _MDL *)VslpHotpatchLog;
    if ( VslpHotpatchLog
      || (Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL, 0x50008uLL, 0x676F4C48uLL),
          (VslpHotpatchLog = (ULONG_PTR)Pool2) != 0) )
    {
      v8 = VslpLockPagesForTransfer((__int64)v39, Pool2, 0x50008u, IoModifyAccess, 2u);
      if ( v8 < 0 )
        KeBugCheckEx(0x13Du, 0xFFFFFFFBuLL, VslpHotpatchLog, 0x50008uLL, v8);
      *(_QWORD *)&v29 = v39[0];
      *((_QWORD *)&v29 + 1) = v39[7];
    }
  }
  v22[1] = (unsigned __int16 *)KeActiveProcessors.Bitmap[0];
  v22[0] = (unsigned __int16 *)&KeActiveProcessors;
  v23 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v21, v22) )
  {
    Prcb = KeGetPrcb(v21);
    if ( ((*(_QWORD *)(Prcb + 36448) - 1LL) & *(_QWORD *)(Prcb + 36448)) != 0 )
    {
      DWORD2(v27) |= 1u;
      break;
    }
  }
  if ( HvlIsCoreSharingPossible() )
    DWORD2(v27) = v10 | 1;
  v11 = 0LL;
  v30 = BugCheckParameter3;
  v12 = 0LL;
  *(_QWORD *)&v31 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  for ( i = 0LL; ; i = v11 )
  {
    if ( BugCheckParameter2 )
    {
      if ( BugCheckParameter3 - v13 <= 0x1FA000 )
        v12 = BugCheckParameter3 - v11;
      else
        v12 = 2072576LL;
      *(_QWORD *)&v31 = v12;
      if ( BugCheckParameter3 - v13 <= 0x1FA000 )
        v14 = i;
      v16 = VslpLockPagesForTransfer((__int64)v35, (struct _MDL *)(BugCheckParameter2 + v14), v12, IoReadAccess, 0);
      if ( v16 < 0 )
        KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, BugCheckParameter2, BugCheckParameter3, v16);
      *((__int64 **)&v26 + 1) = v35[0];
      *(_QWORD *)&v27 = v37;
    }
    v33[0] = v26;
    v33[2] = v28;
    v33[3] = v29;
    v33[4] = v30;
    v33[1] = v27;
    v34 = v32;
    v33[5] = v31;
    v17 = VslpEnterIumSecureMode(2u, 0x37u, 0, (__int64)v33);
    v18 = v17;
    if ( v17 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, BugCheckParameter2, BugCheckParameter3, v17);
    if ( BugCheckParameter2 && v36 )
      VslpUnlockPagesForTransfer(v35);
    v11 += v12;
    *((_QWORD *)&v30 + 1) = v11;
    v13 = v11;
    if ( v11 >= BugCheckParameter3 )
      break;
    v14 = v11;
  }
  v19 = (__int64 **)v38;
  do
  {
    if ( *((_WORD *)v19 + 9) )
      VslpUnlockPagesForTransfer(v19);
    v19 += 9;
    --v5;
  }
  while ( v5 );
  return v18;
}
