/*
 * XREFs of ?_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180540778
 * Callers:
 *     ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180540470 (-UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback.c)
 * Callees:
 *     ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x18054068C (-_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::_RegisterItem(
        CDropFeedback *this,
        struct IDropFeedbackItem *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx

  v6 = -2147024809;
  v7 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2);
  if ( (int)CDropFeedback::_FindItem(this, v7, 0LL) < 0 )
  {
    if ( *((_QWORD *)this + 18) )
    {
      v8 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 96LL))(a2);
      if ( !v8 || (v9 = v8 - 1) == 0 || (unsigned int)(v9 - 1) <= 1 )
      {
        v6 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)a2 + 152LL))(
               a2,
               *((_QWORD *)this + 18),
               *((_QWORD *)this + 20),
               *((_QWORD *)this + 8),
               (char *)this + 72);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *, struct IDCompBatchAnimationCallback *))(*(_QWORD *)a2 + 160LL))(
                 a2,
                 a3);
          if ( v6 >= 0 )
            return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, struct IDropFeedbackItem *))(**((_QWORD **)this + 16)
                                                                                               + 40LL))(
                                   *((_QWORD *)this + 16),
                                   a2);
        }
      }
    }
  }
  return (unsigned int)v6;
}
