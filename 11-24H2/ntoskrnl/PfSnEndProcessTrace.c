/*
 * XREFs of PfSnEndProcessTrace @ 0x14094BF24
 * Callers:
 *     PfSnFailProcessTrace @ 0x14094A560 (PfSnFailProcessTrace.c)
 *     PfSnOperationProcess @ 0x14094AD54 (PfSnOperationProcess.c)
 *     PfProcessExitNotification @ 0x14094BDC4 (PfProcessExitNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PfSnReferenceProcessTrace @ 0x14034E6D0 (PfSnReferenceProcessTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

__int64 __fastcall PfSnEndProcessTrace(__int64 a1, signed __int32 a2, unsigned __int64 a3)
{
  char v6; // di
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned int v10; // esi
  struct _EX_RUNDOWN_REF *v12; // r9
  __int64 v13; // r9
  int v14; // r10d
  int v15; // eax
  int v16; // r10d
  int v17; // eax
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  char v27[16]; // [rsp+80h] [rbp-80h] BYREF
  int *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  char v31[16]; // [rsp+A0h] [rbp-60h] BYREF
  int *v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  unsigned int *v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  __int64 *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]

  v6 = 1;
  if ( (unsigned int)dword_140E074B8 > 4 && (byte_140E074C8 & 1) != 0 && (qword_140E074D0 & 1) == qword_140E074D0 )
  {
    v44 = 0;
    v42 = &v21;
    v21 = a1;
    v43 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)byte_14004877B, 0LL, 0LL, 3u, &v41);
  }
  v8 = PfSnReferenceProcessTrace(a1);
  v9 = v8;
  if ( v8 )
  {
    if ( !a3 || !memcmp((const void *)a3, &v8[3], 0x40uLL) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)&v9[50], a2, 0) )
      {
        v10 = -1073741431;
      }
      else
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&v9[46], DelayedWorkQueue);
        v10 = 0;
      }
    }
    else
    {
      v10 = -1073741198;
    }
  }
  else
  {
    v10 = -1073741275;
  }
  if ( (unsigned int)dword_140E074B8 > 4 )
  {
    if ( (byte_140E074C8 & 1) == 0 || (qword_140E074D0 & 1) != qword_140E074D0 )
      v6 = 0;
    if ( v6 )
    {
      v26 = 0;
      v24 = &v22;
      v12 = v9;
      v22 = a1;
      if ( v9 )
        v12 = v9;
      v25 = 8;
      tlgCreate1Sz_wchar_t(
        (__int64)v27,
        (const wchar_t *)((unsigned __int64)&v12[3] & -(__int64)(v9 != 0LL) & ((unsigned __int128)-(__int128)((unsigned __int64)&v12[3] & -(__int64)(v9 != 0LL)) >> 64)));
      if ( v9 && v13 )
        v15 = *(_DWORD *)(v13 + 60);
      else
        v15 = 0;
      v30 = 0;
      v18 = v15;
      v28 = &v18;
      v29 = v14;
      tlgCreate1Sz_wchar_t((__int64)v31, (const wchar_t *)(a3 & ((unsigned __int128)-(__int128)a3 >> 64)));
      if ( a3 )
        v17 = *(_DWORD *)(a3 + 60);
      else
        v17 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v19 = v17;
      v33 = v16;
      v32 = &v19;
      v35 = &v20;
      v38 = &v21;
      v20 = v10;
      v36 = v16;
      LODWORD(v21) = a2;
      v39 = v16;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E074B8,
        (unsigned __int8 *)word_14004870A,
        0LL,
        0LL,
        9u,
        &v23);
    }
  }
  if ( v9 )
    ExReleaseRundownProtection_0(v9 + 45);
  return v10;
}
