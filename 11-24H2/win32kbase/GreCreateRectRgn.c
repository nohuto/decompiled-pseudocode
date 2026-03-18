/*
 * XREFs of GreCreateRectRgn @ 0x1400EF5F0
 * Callers:
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDB4 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDE0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  LONG left; // ecx
  LONG top; // ecx
  struct HOBJ__ *inserted; // rax
  struct HOBJ__ *v8; // rdi
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v11; // rbx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v12; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-48h] BYREF
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v14; // [rsp+48h] [rbp-28h]
  struct _RECTL v15; // [rsp+50h] [rbp-20h] BYREF

  v15.left = a1;
  v15.top = a2;
  v15.right = a3;
  v15.bottom = a4;
  if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != -134217728
    || (v9 = a4 & 0xF8000000) != 0 && v9 != -134217728
    || (v10 = a3 & 0xF8000000) != 0 && v10 != -134217728
    || (a2 & 0xF8000000) != 0 && (a2 & 0xF8000000) != 0xF8000000 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
    v11 = v12;
    v8 = 0LL;
    if ( v12 )
    {
      left = v15.left;
      if ( v15.left > v15.right )
      {
        v15.left = v15.right;
        v15.right = left;
      }
      top = v15.top;
      if ( v15.top > v15.bottom )
      {
        v15.top = v15.bottom;
        v15.bottom = top;
      }
      RGNOBJ::vSet((RGNOBJ *)&v12, &v15);
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v13);
      inserted = 0LL;
      if ( v14 || (inserted = HmgInsertObjectInternal(v11, 9, 4u)) == 0LL )
      {
        v8 = inserted;
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v12);
      }
      else
      {
        v14 = v11;
        v8 = inserted;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v13);
    }
    else
    {
      EngSetLastError(8u);
    }
    return v8;
  }
}
