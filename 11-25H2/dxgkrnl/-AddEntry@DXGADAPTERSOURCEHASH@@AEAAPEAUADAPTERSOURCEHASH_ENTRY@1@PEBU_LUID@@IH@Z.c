/*
 * XREFs of ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1403840D8
 * Callers:
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1403246EC (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x140384064 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1403245A4 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1403249AC (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::AddEntry(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        int a3,
        __int64 a4)
{
  char v4; // r14
  _DWORD *Buffer; // rax
  unsigned int v9; // esi
  __int64 v10; // r9
  unsigned int v11; // r10d
  unsigned int v12; // ebp
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rbx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *result; // rax
  char *v15; // rbx
  int v16; // ecx

  v4 = a4;
  if ( !*(_QWORD *)((char *)this + 60) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 48), 0x80u, 0, a4);
    if ( !Buffer )
      return 0LL;
    Buffer[1] = -1;
    *Buffer = -1;
    Buffer[2] = -1;
    Buffer[3] = Buffer[3] & 0xFFFFFFFC | 1;
    *((_DWORD *)this + 16) = 1;
    memset(Buffer + 4, 0, 0x70uLL);
  }
  v9 = (unsigned int)AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  v12 = 1 << *((_DWORD *)this + 17);
  if ( v9 <= v12 )
  {
    if ( v9 != v12 )
    {
      if ( v11 == v9 )
      {
        if ( v9 + 8 < v12 )
          v12 = v9 + 8;
        v15 = (char *)AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 48), 16 * v12, 1, v10);
        memset(&v15[16 * v9 + 16], 0, 16LL * (v12 - v9 - 1));
      }
      else
      {
        v15 = (char *)*((_QWORD *)this + 6);
      }
      Entry = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)&v15[16 * *((unsigned int *)this + 16)];
      goto LABEL_15;
    }
  }
  else
  {
    v9 = 1 << *((_DWORD *)this + 17);
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, v11 % v9, 0, 0LL, 0LL);
  if ( !Entry )
    return 0LL;
LABEL_15:
  v16 = *((_DWORD *)Entry + 3) | 1;
  *((_DWORD *)Entry + 3) = v16;
  *(struct _LUID *)Entry = *a2;
  *((_DWORD *)Entry + 2) = a3;
  *((_DWORD *)Entry + 3) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(2 * v4)) & 2;
  result = Entry;
  ++*((_DWORD *)this + 16);
  return result;
}
