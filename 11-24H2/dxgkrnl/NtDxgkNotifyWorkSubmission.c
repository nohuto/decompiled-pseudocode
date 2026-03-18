/*
 * XREFs of NtDxgkNotifyWorkSubmission @ 0x1401DB340
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1401D98CC (-DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z.c)
 */

__int64 __fastcall NtDxgkNotifyWorkSubmission(struct _D3DKMT_NOTIFY_WORK_SUBMISSION *a1, __int64 a2, __int64 a3)
{
  return DxgkNotifyWorkSubmissionInternal(a1, a2, a3);
}
