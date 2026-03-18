/*
 * XREFs of ??_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z @ 0x1401CEBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTDR_GDI_RESET_THREAD@@MEAA@XZ @ 0x1401CEB50 (--1CTDR_GDI_RESET_THREAD@@MEAA@XZ.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1401CFB28 (-TdrFreePool@@YAXPEAX@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT **__fastcall CTDR_GDI_RESET_THREAD::`scalar deleting destructor'(
        struct _TDR_RECOVERY_CONTEXT **this,
        char a2)
{
  CTDR_GDI_RESET_THREAD::~CTDR_GDI_RESET_THREAD(this);
  if ( (a2 & 1) != 0 )
    TdrFreePool(this);
  return this;
}
