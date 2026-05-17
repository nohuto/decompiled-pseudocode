/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x1800ECE80
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlSelfRelativeToAbsoluteSD(
        _WORD *Src,
        void *a2,
        _DWORD *a3,
        void *a4,
        unsigned int *a5,
        void *a6,
        unsigned int *a7,
        void *a8,
        unsigned int *a9,
        void *a10,
        unsigned int *a11)
{
  __int16 v11; // r10
  unsigned int v12; // eax
  unsigned __int8 *v15; // rbx
  unsigned int v16; // r8d
  unsigned __int16 *v17; // rdi
  unsigned int v18; // edx
  unsigned __int8 *v19; // rbp
  unsigned int v20; // r9d
  unsigned __int16 *v21; // rsi
  unsigned int *v22; // r10
  __int64 result; // rax

  v11 = Src[1];
  v12 = 0;
  if ( v11 >= 0 )
    return 3221225703LL;
  if ( !*((_DWORD *)Src + 1) )
  {
    v15 = 0LL;
    goto LABEL_39;
  }
  v15 = (unsigned __int8 *)Src + *((unsigned int *)Src + 1);
  if ( !v15 )
  {
LABEL_39:
    v16 = 0;
    goto LABEL_5;
  }
  v16 = (4 * v15[1] + 11) & 0xFFFFFFFC;
  v12 = 0;
LABEL_5:
  if ( (v11 & 4) == 0 || !*((_DWORD *)Src + 4) )
  {
    v17 = 0LL;
LABEL_7:
    v18 = 0;
    goto LABEL_11;
  }
  v17 = (_WORD *)((char *)Src + *((unsigned int *)Src + 4));
  if ( !v17 )
    goto LABEL_7;
  v18 = (v17[1] + 3) & 0xFFFFFFFC;
LABEL_11:
  if ( *((_DWORD *)Src + 2) )
  {
    v19 = (unsigned __int8 *)Src + *((unsigned int *)Src + 2);
    if ( v19 )
    {
      v20 = (4 * v19[1] + 11) & 0xFFFFFFFC;
      v12 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v19 = 0LL;
  }
  v20 = 0;
LABEL_14:
  if ( (v11 & 0x10) != 0 && *((_DWORD *)Src + 3) )
  {
    v21 = (_WORD *)((char *)Src + *((unsigned int *)Src + 3));
    if ( v21 )
      v12 = (v21[1] + 3) & 0xFFFFFFFC;
  }
  else
  {
    v21 = 0LL;
  }
  v22 = a11;
  if ( a2 && (v22 = a11, *a3 >= 0x28u) && v16 <= *a9 && v18 <= *a5 && v12 <= *a7 && v20 <= *a11 )
  {
    memmove(a2, Src, 0x14uLL);
    *((_WORD *)a2 + 1) &= ~0x8000u;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    if ( v15 )
    {
      memmove(a8, v15, 4LL * v15[1] + 8);
      *((_QWORD *)a2 + 1) = a8;
    }
    if ( v19 )
    {
      memmove(a10, v19, 4LL * v19[1] + 8);
      *((_QWORD *)a2 + 2) = a10;
    }
    if ( v21 )
    {
      memmove(a6, v21, v21[1]);
      *((_QWORD *)a2 + 3) = a6;
    }
    if ( v17 )
    {
      memmove(a4, v17, v17[1]);
      *((_QWORD *)a2 + 4) = a4;
    }
    return 0LL;
  }
  else
  {
    *a3 = 40;
    *v22 = v20;
    *a9 = v16;
    *a7 = v12;
    result = 3221225507LL;
    *a5 = v18;
  }
  return result;
}
