/*
 * XREFs of MiLogNotifyPageHeat @ 0x1406868B0
 * Callers:
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiLogNotifyPageHeat(_DWORD *a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // rsi
  _QWORD *v5; // rcx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  int *v12; // rdx
  int *v13; // rax
  unsigned __int64 v14; // rcx
  int v16; // [rsp+28h] [rbp-99h]
  int v17; // [rsp+30h] [rbp-91h]
  unsigned __int16 v18; // [rsp+48h] [rbp-79h] BYREF
  int v19; // [rsp+4Ch] [rbp-75h] BYREF
  int v20; // [rsp+50h] [rbp-71h] BYREF
  int v21; // [rsp+54h] [rbp-6Dh] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-59h] BYREF
  int *v25; // [rsp+88h] [rbp-39h]
  __int64 v26; // [rsp+90h] [rbp-31h]
  unsigned __int64 *v27; // [rsp+98h] [rbp-29h]
  __int64 v28; // [rsp+A0h] [rbp-21h]
  unsigned __int64 *v29; // [rsp+A8h] [rbp-19h]
  __int64 v30; // [rsp+B0h] [rbp-11h]
  int *v31; // [rsp+B8h] [rbp-9h]
  __int64 v32; // [rsp+C0h] [rbp-1h]
  int *v33; // [rsp+C8h] [rbp+7h]
  __int64 v34; // [rsp+D0h] [rbp+Fh]
  unsigned __int16 *v35; // [rsp+D8h] [rbp+17h]
  __int64 v36; // [rsp+E0h] [rbp+1Fh]
  _DWORD *v37; // [rsp+E8h] [rbp+27h]
  int v38; // [rsp+F0h] [rbp+2Fh]
  int v39; // [rsp+F4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( !*(_QWORD *)&qword_140E37658 )
    return (char)v1;
  if ( !**(_DWORD **)&qword_140E37658 )
    return (char)v1;
  LOBYTE(v1) = tlgKeywordOn(*(__int64 *)&qword_140E37658, 64LL);
  if ( !(_BYTE)v1 )
    return (char)v1;
  v3 = (unsigned __int64 *)(a1 + 4);
  v4 = 0LL;
  v5 = a1 + 4;
  v6 = (unsigned __int64)&a1[2 * a1[1] + 4];
  if ( (unsigned __int64)(a1 + 4) < v6 )
  {
    do
    {
      v7 = (*v5 & 0x3FFLL) + 1;
      v8 = (*v5 >> 10) & 3LL;
      if ( ((*v5 >> 10) & 3) != 0 )
      {
        do
        {
          v7 <<= 9;
          LODWORD(v8) = v8 - 1;
        }
        while ( (_DWORD)v8 );
      }
      v4 += v7;
      ++v5;
    }
    while ( (unsigned __int64)v5 < v6 );
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( (*a1 & 1) != 0 )
  {
    if ( **(_DWORD **)&qword_140E37658 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E37658, 64LL) )
      goto LABEL_18;
    v14 = *v3;
    v12 = (int *)&word_140058486;
    v21 = a1[1];
    v25 = &v21;
    v27 = &v23;
    v22 = v14 >> 12;
    v29 = &v22;
    v23 = v4;
    v20 = (v14 & 0x3FF) + 1;
    v19 = (v14 >> 10) & 3;
    v31 = &v20;
    v13 = &v19;
  }
  else
  {
    if ( **(_DWORD **)&qword_140E37658 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140E37658, 64LL) )
      goto LABEL_18;
    v11 = *v3;
    v12 = &dword_14005850C;
    v19 = a1[1];
    v25 = &v19;
    v27 = &v22;
    v23 = v11 >> 12;
    v29 = &v23;
    v22 = v4;
    v20 = (v11 & 0x3FF) + 1;
    v21 = (v11 >> 10) & 3;
    v31 = &v20;
    v13 = &v21;
  }
  v33 = v13;
  v18 = *((_WORD *)a1 + 2);
  v38 = 8 * v18;
  v35 = &v18;
  v28 = 8LL;
  v26 = 4LL;
  v30 = 8LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 2LL;
  v37 = a1 + 4;
  v39 = 0;
  tlgWriteEx_EtwWriteEx(v10, (unsigned __int8 *)v12, v10, 1u, v16, v17, 9u, &v24);
LABEL_18:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  LOBYTE(v1) = CurrentIrql;
  __writecr8(CurrentIrql);
  return (char)v1;
}
