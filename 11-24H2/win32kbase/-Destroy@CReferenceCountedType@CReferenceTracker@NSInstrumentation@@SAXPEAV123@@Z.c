/*
 * XREFs of ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1401D0E9C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1401D0DE8 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 * Callees:
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1401D0C2C (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *P)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(P);
  ExFreePoolWithTag(P, 0);
}
