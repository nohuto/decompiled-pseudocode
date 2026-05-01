/*
 * XREFs of ??_GCDropFeedbackList@@UEAAPEAXI@Z @ 0x18053E080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1CDropFeedbackList@@UEAA@XZ @ 0x18053E050 (--1CDropFeedbackList@@UEAA@XZ.c)
 */

CDropFeedbackList *__fastcall CDropFeedbackList::`scalar deleting destructor'(CDropFeedbackList *this, char a2)
{
  CDropFeedbackList::~CDropFeedbackList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
