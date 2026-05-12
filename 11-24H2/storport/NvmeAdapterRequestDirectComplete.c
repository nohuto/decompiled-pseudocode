/*
 * XREFs of NvmeAdapterRequestDirectComplete @ 0x1400D6AF8
 * Callers:
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x140025210 (RaidLogMiniportCompletion.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140035A60 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeAdapterRequestDirectComplete(__int64 a1, __int64 a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG_PTR v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rdx
  bool v13; // cf
  __int64 v14; // r8
  __int64 v15; // r9
  int BugCheckParameter4; // [rsp+20h] [rbp-89h]
  int v17; // [rsp+28h] [rbp-81h]
  char v18; // [rsp+40h] [rbp-69h] BYREF
  int v19; // [rsp+44h] [rbp-65h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21[2]; // [rsp+60h] [rbp-49h] BYREF
  ULONG_PTR *v22; // [rsp+80h] [rbp-29h]
  __int64 v23; // [rsp+88h] [rbp-21h]
  __int64 v24; // [rsp+90h] [rbp-19h]
  __int64 v25; // [rsp+98h] [rbp-11h]
  int *v26; // [rsp+A0h] [rbp-9h]
  __int64 v27; // [rsp+A8h] [rbp-1h]
  char v28[16]; // [rsp+B0h] [rbp+7h] BYREF
  char *v29; // [rsp+C0h] [rbp+17h]
  __int64 v30; // [rsp+C8h] [rbp+1Fh]
  char v31[16]; // [rsp+D0h] [rbp+27h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  if ( CurrentIrql > 2u )
  {
    v8 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)BugCheckParameter2 = 0LL;
    RaidDriverGetName(v8, (__int64)BugCheckParameter2);
    KeBugCheckEx(0xF0u, 5uLL, BugCheckParameter2[1], *(_QWORD *)(a2 + 168), v7);
  }
  if ( (qword_140170460 & 8) != 0 )
    RaidLogMiniportCompletion((_QWORD *)a2);
  v9 = *(_QWORD *)(a2 + 160);
  v10 = 0LL;
  if ( !v9 )
    goto LABEL_8;
  if ( *(_BYTE *)(v9 + 141) != 0xAB && *(_BYTE *)(v9 + 141) != 0xAC )
  {
    *(_BYTE *)(v9 + 141) = -85;
LABEL_8:
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    if ( *(_QWORD *)(a2 + 656) )
    {
      if ( (unsigned __int8)v7 < 2u )
        LOBYTE(v7) = KfRaiseIrql(2u);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 656))(a2, v5, v6, v10);
      if ( (unsigned __int8)v7 < 2u )
        KeLowerIrql(v7);
    }
    return;
  }
  if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(v9, 0x400000000000LL) )
  {
    v11 = *(const wchar_t **)(a1 + 1016);
    v22 = BugCheckParameter2;
    BugCheckParameter2[0] = 0x1000000LL;
    v24 = a1 + 1032;
    v19 = *(_DWORD *)(a1 + 56);
    v26 = &v19;
    v23 = 8LL;
    v25 = 16LL;
    v27 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v28, v11);
    v12 = *(const wchar_t **)(a1 + 1024);
    v13 = (*(_BYTE *)(a1 + 144) & 1) != 0;
    v30 = 1LL;
    v18 = v13 ? 20 : 17;
    v29 = &v18;
    tlgCreate1Sz_wchar_t((__int64)v31, v12);
    tlgWriteEx_EtwWriteEx((__int64)v21, (unsigned __int8 *)dword_1401630CD, v14, v15, BugCheckParameter4, v17, 8u, v21);
  }
}
