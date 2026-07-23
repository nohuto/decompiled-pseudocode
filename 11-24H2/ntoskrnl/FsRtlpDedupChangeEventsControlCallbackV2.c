/*
 * XREFs of FsRtlpDedupChangeEventsControlCallbackV2 @ 0x14057EC60
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     McTemplateK0jjtq_EtwWriteTransfer @ 0x14057EE24 (McTemplateK0jjtq_EtwWriteTransfer.c)
 */

void __fastcall FsRtlpDedupChangeEventsControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _BYTE *CallbackContext)
{
  unsigned int v7; // r8d
  unsigned __int8 v8; // r9
  __int64 v9; // rdx
  bool v10; // r9
  int v11; // edx
  int *v12; // r11
  int v13; // eax
  int v14; // edx
  PVOID *i; // rbx

  if ( CallbackContext && ControlCode == 1 )
  {
    CallbackContext[40] = Level;
    v7 = 0;
    *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
    *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
    for ( *((_DWORD *)CallbackContext + 9) = 1; v7 < *((unsigned __int16 *)CallbackContext + 21); ++v7 )
    {
      v8 = CallbackContext[40];
      v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v7);
      v10 = (*(_BYTE *)(v7 + *((_QWORD *)CallbackContext + 8)) <= v8 || !v8)
         && (!v9
          || (v9 & *((_QWORD *)CallbackContext + 2)) != 0
          && (v9 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
      v11 = 1 << (v7 & 0x1F);
      v12 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v7 >> 5));
      v13 = *v12;
      if ( v10 )
        v14 = v13 | v11;
      else
        v14 = v13 & ~v11;
      *v12 = v14;
    }
    ExAcquireResourceSharedLite(&Resource, 1u);
    for ( i = (PVOID *)FsRtlDedupChangeData; i != &FsRtlDedupChangeData; i = (PVOID *)*i )
    {
      if ( (Microsoft_Windows_Dedup_ChangeEnableBits & 1) != 0 )
        McTemplateK0jjtq_EtwWriteTransfer(
          (unsigned int)&MS_Dedup_Change_Provider_Context,
          *((unsigned __int8 *)i + 52),
          0,
          (_DWORD)i + 16,
          (__int64)(i + 4),
          *((_BYTE *)i + 52),
          *((_DWORD *)i + 12));
    }
    ExReleaseResourceLite(&Resource);
  }
}
