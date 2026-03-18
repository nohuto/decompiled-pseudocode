/*
 * XREFs of ?GetCurrentRealization@CFlipExBuffer@@UEBAJPEAPEAVCBufferRealization@@@Z @ 0x140038DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::GetCurrentRealization(CFlipExBuffer *this, struct CBufferRealization **a2)
{
  unsigned int v2; // r10d
  struct CBufferRealization *v3; // rax
  unsigned int v4; // r9d
  char *v5; // r11
  int v6; // r8d
  char *v7; // rcx

  v2 = *((_DWORD *)this + 99);
  v3 = 0LL;
  v4 = 0;
  if ( v2 >= *((_DWORD *)this + 72) )
  {
    v4 = -1073741275;
  }
  else
  {
    v5 = (char *)this + 272;
    v6 = 0;
    v7 = (char *)*((_QWORD *)this + 34);
    while ( v7 != v5 )
    {
      if ( v6 == v2 )
      {
        v3 = (struct CBufferRealization *)(v7 - 8);
        break;
      }
      v7 = *(char **)v7;
      ++v6;
    }
  }
  *a2 = v3;
  return v4;
}
