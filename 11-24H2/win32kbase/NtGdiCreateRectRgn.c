/*
 * XREFs of NtGdiCreateRectRgn @ 0x140039620
 * Callers:
 *     <none>
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDB4 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDE0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     HmgFreeObjectAttr @ 0x140039540 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x1400397B0 (HmgAllocateObjectAttr.c)
 *     ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x140039980 (-GreEncodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  LONG left; // ecx
  LONG top; // ecx
  struct HOBJ__ *inserted; // rax
  struct HOBJ__ *v8; // rsi
  void *v9; // rdi
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  void *ObjectAttr; // rdi
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v13; // rbx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v14; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v15[32]; // [rsp+28h] [rbp-48h] BYREF
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v16; // [rsp+48h] [rbp-28h]
  struct _RECTL v17; // [rsp+50h] [rbp-20h] BYREF

  v17.left = a1;
  v17.top = a2;
  v17.right = a3;
  v17.bottom = a4;
  if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != -134217728
    || (v10 = a4 & 0xF8000000) != 0 && v10 != -134217728
    || (v11 = a3 & 0xF8000000) != 0 && v11 != -134217728
    || (a2 & 0xF8000000) != 0 && (a2 & 0xF8000000) != 0xF8000000 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v8 = 0LL;
    ObjectAttr = (void *)HmgAllocateObjectAttr();
    if ( ObjectAttr && (RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14), (v13 = v14) != 0LL) )
    {
      left = v17.left;
      if ( v17.left > v17.right )
      {
        v17.left = v17.right;
        v17.right = left;
      }
      top = v17.top;
      if ( v17.top > v17.bottom )
      {
        v17.top = v17.bottom;
        v17.bottom = top;
      }
      RGNOBJ::vSet((RGNOBJ *)&v14, &v17);
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v15);
      inserted = 0LL;
      if ( v16 || (inserted = HmgInsertObjectInternal(v13, 1, 4u)) == 0LL )
      {
        v8 = inserted;
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v14);
        HmgFreeObjectAttr((__int64)ObjectAttr);
      }
      else
      {
        v16 = v13;
        v8 = inserted;
        v9 = GreEncodeUserModePointer(ObjectAttr);
        *(_QWORD *)(HmgPentryFromPobj(v13) + 16) = v9;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v15);
    }
    else
    {
      EngSetLastError(8u);
    }
    return v8;
  }
}
