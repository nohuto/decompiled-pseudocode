/*
 * XREFs of ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x14018CFF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall QueryTrueTypeTableRequest::CaptureUsermodeParameters(QueryTrueTypeTableRequest *this, int *a2)
{
  const void *v3; // r9
  _QWORD *v4; // rax
  _DWORD *v5; // r8
  size_t v6; // rdi
  _QWORD *v7; // rdx
  void *v10; // rcx
  _DWORD *v11; // rcx

  v3 = (const void *)*((_QWORD *)a2 + 3);
  v4 = (_QWORD *)*((_QWORD *)a2 + 4);
  v5 = (_DWORD *)*((_QWORD *)a2 + 5);
  v6 = a2[12];
  if ( (v6 & 0x80000000) == 0LL
    && ((unsigned int)v6 <= *((_DWORD *)this + 15) || !*((_QWORD *)this + 8))
    && v3 == *((const void **)this + 12) )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 9);
    if ( (v7 ? v4 == *((_QWORD **)this + 13) : v4 == 0LL)
      && (*((_QWORD *)this + 10) ? v5 == *((_DWORD **)this + 14) : v5 == 0LL) )
    {
      v10 = (void *)*((_QWORD *)this + 8);
      if ( v10 )
      {
        memmove(v10, v3, v6);
      }
      else
      {
        if ( v7 )
          *v7 = *v4;
        v11 = (_DWORD *)*((_QWORD *)this + 10);
        if ( v11 )
          *v11 = *v5;
      }
      *((_DWORD *)this + 22) = v6;
    }
  }
}
