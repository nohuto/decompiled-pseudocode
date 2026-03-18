/*
 * XREFs of ?GetSize@CFormatConverter@@UEAAJPEAI0@Z @ 0x1802DCB00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetSize(CFormatConverter *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v6 = -2003292404;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !a2 )
  {
    v8 = 483;
LABEL_3:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, v8, 0LL);
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v8 = 484;
    goto LABEL_3;
  }
  if ( *((_QWORD *)this + 7) )
  {
    v6 = 0;
    *a2 = *((_DWORD *)this + 22);
    *a3 = *((_DWORD *)this + 23);
  }
LABEL_8:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
